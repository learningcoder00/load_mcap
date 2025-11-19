from setuptools import find_packages
from setuptools import setup

setup(
    name='deva_map_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('deva_map_msgs', 'deva_map_msgs.*')),
)
