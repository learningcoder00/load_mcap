from setuptools import find_packages
from setuptools import setup

setup(
    name='deva_aeb_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('deva_aeb_msgs', 'deva_aeb_msgs.*')),
)
