#include "mcap_streamer/s3_downloader.hpp"
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <filesystem>

namespace mcap_streamer
{

    S3Downloader::S3Downloader()
    {
    }

    S3Downloader::~S3Downloader()
    {
    }

    std::string S3Downloader::convertS3UrlToHttp(const std::string & s3_url, const std::string & region)
    {
        if(s3_url.find("s3://") == 0)
        {
            std::string path = s3_url.substr(5);
            size_t first_slash = path.find('/');
            std::string bucket = path.substr(0, first_slash);
            std::string object_key = path.substr(first_slash + 1);

            // 构建HTTP URL: https://bucket-name.s3.region.amazonaws.com/object-key
            std::ostringstream oss;
            oss << "https://" << bucket << ".s3." << region << ".amazonaws.com/" << object_key;
            return oss.str();
        }
        return s3_url;
    }

    bool S3Downloader::downloadWithAwsCli(const std::string & s3_url, 
                            const std::string & local_path, 
                            const std::string & endpoint_url) 
    {
        std::filesystem::path file_path(local_path);
        std::filesystem::path dir_path = file_path.parent_path();
        if(!dir_path.empty() && !std::filesystem::exists(dir_path))
        {
            std::filesystem::create_directories(dir_path);
        }

        std::ostringstream cmd;
        cmd << "aws s3 cp";
        
        if (!endpoint_url.empty()) {
            cmd << " --endpoint-url=" << endpoint_url;
        }
        
        cmd << " " << s3_url << " " << local_path;
        cmd << " --no-progress";
    
        std::cout << "执行命令: " << cmd.str() << std::endl;
        int result = std::system(cmd.str().c_str());
        return result == 0;
    }

    bool S3Downloader::downloadFromS3(
    const std::string & s3_url,
    const std::string & local_path,
    const std::string & access_key_id,
    const std::string & secret_access_key,
    const std::string & region,
    const std::string & endpoint_url)
    {
        std::cout << "正在从S3下载文件: " << s3_url << std::endl;
        std::cout << "保存到: " << local_path << std::endl;
    
    // 设置环境变量（如果提供了凭证）
    if (!access_key_id.empty() && !secret_access_key.empty()) {
        setenv("AWS_ACCESS_KEY_ID", access_key_id.c_str(), 1);
        setenv("AWS_SECRET_ACCESS_KEY", secret_access_key.c_str(), 1);
    }
    
    if (!region.empty()) {
        setenv("AWS_DEFAULT_REGION", region.c_str(), 1);
    }
        
        bool success = downloadWithAwsCli(s3_url, local_path, endpoint_url);
        if(success && std::filesystem::exists(local_path))
        {
            std::cout << "下载成功，文件大小: " << std::filesystem::file_size(local_path) << " 字节" << std::endl;
            return true;
        }
        else
        {
            std::cerr << "下载失败" << std::endl;
            return false;
        }
    }

}  // namespace mcap_streamer
