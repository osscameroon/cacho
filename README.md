# CACHO

A tiny C++ in-memory cache system with Least recently Used algorithm as a python shared-object library !

## To install and build the lib on pypi

You just have to run these bash files :
```shell
#clone the repo
git clone https://github.com/osscameroon/cacho

# cmake build
sh ./shells/build.sh

# building the wheel
sh ./shells/build_whl.sh
```

## How to start

```python
import cacho as c

# To set a value
c.set("key1", "value1")

# We can also check if the key exist
if c.exists("key1"):
    # And get it
    print(c.get("key1"))
```

## LICENSE

- [MIT](./LICENSE.txt)

