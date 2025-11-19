from setuptools import find_packages
from setuptools import setup

setup(
    name='rviz_plug_msg',
    version='0.0.0',
    packages=find_packages(
        include=('rviz_plug_msg', 'rviz_plug_msg.*')),
)
