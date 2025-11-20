#ifndef MCAP_STREAMER__S3_DOWNLOADER_HPP_
#define MCAP_STREAMER__S3_DOWNLOADER_HPP_

#include <string>
#include <memory>
#include <fstream>

namespace mcap_streamer
{

class S3Downloader
{
public:
  S3Downloader();
  ~S3Downloader();

  /**
   * @brief 从S3下载文件到本地
   * @param s3_url S3文件的URL (格式: s3://bucket-name/path/to/file.mcap 或 https://bucket-name.s3.region.amazonaws.com/path/to/file.mcap)
   * @param local_path 本地保存路径
   * @param access_key_id AWS访问密钥ID (可选，如果为空则使用环境变量或IAM角色)
   * @param secret_access_key AWS秘密访问密钥 (可选，如果为空则使用环境变量或IAM角色)
   * @param region AWS区域 (可选，默认: us-east-1)
   * @param endpoint_url 自定义端点URL (可选，用于兼容S3 API的对象存储服务，如: http://oss.i.machdrive.cn)
   * @return 是否下载成功
   */
  bool downloadFromS3(
    const std::string & s3_url,
    const std::string & local_path,
    const std::string & access_key_id = "",
    const std::string & secret_access_key = "",
    const std::string & region = "us-east-1",
    const std::string & endpoint_url = "");

private:
  /**
   * @brief 使用AWS CLI下载文件（推荐方式，支持自定义端点和认证）
   */
  bool downloadWithAwsCli(
    const std::string & s3_url,
    const std::string & local_path,
    const std::string & endpoint_url = "");

  /**
   * @brief 使用curl下载文件（仅用于公开文件）
   */
  bool downloadWithCurl(
    const std::string & url,
    const std::string & local_path);

  /**
   * @brief 将S3 URL转换为HTTP URL
   */
  std::string convertS3UrlToHttp(const std::string & s3_url, const std::string & region);
};

}  // namespace mcap_streamer

#endif  // MCAP_STREAMER__S3_DOWNLOADER_HPP_

