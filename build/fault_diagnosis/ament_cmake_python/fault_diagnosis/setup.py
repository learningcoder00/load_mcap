from setuptools import find_packages
from setuptools import setup

setup(
    name='fault_diagnosis',
    version='0.0.0',
    packages=find_packages(
        include=('fault_diagnosis', 'fault_diagnosis.*')),
)
