from setuptools import find_packages
from setuptools import setup

setup(
    name='imu_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('imu_interfaces', 'imu_interfaces.*')),
)
