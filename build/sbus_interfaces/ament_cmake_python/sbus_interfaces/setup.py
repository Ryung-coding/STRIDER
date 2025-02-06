from setuptools import find_packages
from setuptools import setup

setup(
    name='sbus_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('sbus_interfaces', 'sbus_interfaces.*')),
)
