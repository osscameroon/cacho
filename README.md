# CACHO

A tiny C++ in-memory cache system with Least recently Used algorithm !

## How to install

```shell
pip3 install cacho
```

## How to use

```python
import cacho as c

# To set a value
c.set("key1", "value1")

# We can also check if the key exist
if c.exists("key1"):
    print(c.get("key1"))

```
