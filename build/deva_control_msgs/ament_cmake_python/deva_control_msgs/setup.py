from setuptools import find_packages
from setuptools import setup

setup(
    name='deva_control_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('deva_control_msgs', 'deva_control_msgs.*')),
)
