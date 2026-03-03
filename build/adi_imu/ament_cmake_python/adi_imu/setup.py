from setuptools import find_packages
from setuptools import setup

setup(
    name='adi_imu',
    version='1.0.0',
    packages=find_packages(
        include=('adi_imu', 'adi_imu.*')),
)
