from setuptools import find_packages
from setuptools import setup

setup(
    name='deva_planning_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('deva_planning_msgs', 'deva_planning_msgs.*')),
)
