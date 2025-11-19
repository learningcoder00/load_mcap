from setuptools import find_packages
from setuptools import setup

setup(
    name='deva_gaode_routing_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('deva_gaode_routing_msgs', 'deva_gaode_routing_msgs.*')),
)
