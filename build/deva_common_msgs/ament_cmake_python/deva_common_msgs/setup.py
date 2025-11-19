from setuptools import find_packages
from setuptools import setup

setup(
    name='deva_common_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('deva_common_msgs', 'deva_common_msgs.*')),
)
