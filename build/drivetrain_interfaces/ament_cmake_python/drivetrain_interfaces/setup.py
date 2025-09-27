from setuptools import find_packages
from setuptools import setup

setup(
    name='drivetrain_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('drivetrain_interfaces', 'drivetrain_interfaces.*')),
)
