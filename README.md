##  Usage
### 1. Compile method 1  
Make sure you have pybind11 folder in your workspace  
(1)mkdir build && cd build && cmake..  
(2)make  
(3)cd ..  
(4)python Test.py  
### 2.Compile method 2 
Make sure you have install pybind11  
g++ -O3 -Wall -shared -std=c++11 -fPIC `python3 -m pybind11 --includes` _lib.cpp -o libadd`python3-config --extension-suffix`  
### 