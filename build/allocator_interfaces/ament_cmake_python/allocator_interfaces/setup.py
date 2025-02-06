from setuptools import find_packages
from setuptools import setup

setup(
    name='allocator_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('allocator_interfaces', 'allocator_interfaces.*')),
)
