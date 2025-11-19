from setuptools import find_packages
from setuptools import setup

setup(
    name='deva_navi_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('deva_navi_msgs', 'deva_navi_msgs.*')),
)
