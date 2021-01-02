pip3 install wheel
pip3 uninstall ./dist/*

python3 setup.py sdist bdist_wheel
pip3 install ./dist/*
