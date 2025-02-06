from setuptools import find_packages
from setuptools import setup

setup(
    name='watchdog_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('watchdog_interfaces', 'watchdog_interfaces.*')),
)
