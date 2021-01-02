# CACHO

A tiny C++ in-memory cache system with Least recently Used algorithm as a python shared-object library!

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

## To build the lib

You just have to run these bash files :
```shell
sh ./shells/build.sh
sh ./shells/build_whl.sh
```

And to deploy on Pypi :
```shell
sh ./pypi_deploy.sh
```

## LICENSE

- [MIT](./LICENSE.txt)
