from setuptools import find_packages
from setuptools import setup

setup(
    name='deva_function_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('deva_function_msgs', 'deva_function_msgs.*')),
)
