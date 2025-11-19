from setuptools import find_packages
from setuptools import setup

setup(
    name='environment_model_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('environment_model_msgs', 'environment_model_msgs.*')),
)
