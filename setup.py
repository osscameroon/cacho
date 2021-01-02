from setuptools import setup, Distribution, find_packages


with open("README.md", "r") as fh:
    long_description = fh.read()

setup(
    name='cacho',
    version='0.0.2',
    package_data={
        'cacho': ['./build/lib/cacho.so'],
    },
    author="Sanix-darker",
    author_email="s4nixd@gmail.com",
    description="A tiny C++ in-memory cache system with Least recently Used algorithm!",
    long_description=long_description,
    long_description_content_type="text/markdown",
    url="https://github.com/osscameroon/cacho",
    packages=find_packages(),
    classifiers=[
        "Programming Language :: Python :: 3",
        "License :: OSI Approved :: MIT License",
        "Operating System :: OS Independent",
    ],
    python_requires='>=3.6',
)
