from setuptools import find_packages
from setuptools import setup

setup(
    name='deva_perception_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('deva_perception_msgs', 'deva_perception_msgs.*')),
)
