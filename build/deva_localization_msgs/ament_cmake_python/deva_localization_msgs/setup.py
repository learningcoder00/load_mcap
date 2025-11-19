from setuptools import find_packages
from setuptools import setup

setup(
    name='deva_localization_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('deva_localization_msgs', 'deva_localization_msgs.*')),
)
