from setuptools import setup, Distribution, find_packages


class BinaryDistribution(Distribution):
    def has_ext_modules(cacho):
        return True

with open("README.md", "r") as fh:
    long_description = fh.read()

# setup(
#     name='cacho',
#     version='0.0.6',
#     author="Sanix-darker",
#     author_email="s4nixd@gmail.com",
#     description="A tiny C++ in-memory cache system with Least recently Used algorithm!",
#     long_description=long_description,
#     long_description_content_type="text/markdown",
#     url="https://github.com/osscameroon/cacho",
#     packages=find_packages(),
#     package_data={
#         'cacho': ['./build/lib/cacho.so'],
#     },
#     distclass=BinaryDistribution,
#     classifiers=[
#         "Programming Language :: Python :: 3",
#         "License :: OSI Approved :: MIT License",
#         "Operating System :: OS Independent",
#     ],
#     python_requires='>=3.6',
# )

setup(
    name='cacho',
    package_data={
        'cacho': ['./build/lib/cacho.so'],
    },
    distclass=BinaryDistribution,
    version='0.0.7',
    author="Sanix-darker",
    author_email="s4nixd@gmail.com",
    description="A tiny C++ in-memory cache system with Least recently Used algorithm!",
    long_description=long_description,
    long_description_content_type="text/markdown",
    url="https://github.com/osscameroon/cacho",
    classifiers=[
        "Programming Language :: Python :: 3",
        "License :: OSI Approved :: MIT License",
        "Operating System :: OS Independent",
    ],
    python_requires='>=3.5',
)