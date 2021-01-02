# CACHO

A tiny C++ in-memory cache system with Least recently Used algorithm as a python shared-object library !

## How to install

To install the pyhon lib, just hit :
```shell
pip3 install cacho
```

## How to use it

```python
import cacho as c

# To set a value
c.set("key1", "value1")

# We can also check if the key exist
if c.exists("key1"):
    # And get it
    print(c.get("key1"))

```

## To build and deploy the lib on pypi

You just have to run these bash files :
```shell
# cmake build
sh ./shells/build.sh
# building the wheel
sh ./shells/build_whl.sh

# And to deploy on Pypi :
sh ./shells/pypi_deploy.sh
```

## LICENSE

- [MIT](./LICENSE.txt)
