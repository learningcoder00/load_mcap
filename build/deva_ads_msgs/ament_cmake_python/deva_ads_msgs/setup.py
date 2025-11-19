from setuptools import find_packages
from setuptools import setup

setup(
    name='deva_ads_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('deva_ads_msgs', 'deva_ads_msgs.*')),
)
