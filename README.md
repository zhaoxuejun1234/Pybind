##  
g++ -O3 -Wall -shared -std=c++11 -fPIC `python3 -m pybind11 --includes` _lib.cpp -o libadd`python3-config --extension-suffix`  
### 