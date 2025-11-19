from setuptools import find_packages
from setuptools import setup

setup(
    name='deva_mdriver_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('deva_mdriver_msgs', 'deva_mdriver_msgs.*')),
)
