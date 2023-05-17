##  Usage
### 1.Why python is slow
(1)Python has dynamic feature  
(2)Garbage Collection needs extra resource to realize  
(3)GIL makes multi-threads unuseful for python  
### 2.Brief Intro
Combination of C++ and Python will provide a powerful tool for coders. You can develop your code efficiently without lose of program running efficiency. See more details of pybind11, please find links [here](https://github.com/pybind/pybind11).    
This repo mainly focuses on the pybind11 embedding of C++11 OOP and provide examples of usages of pybind11 embedding with classes.  
Core Usage:  
(1)Wrap or Pybind11::buffer  
(2)Return value by reference  
(3)Compile through cmake or makefile  
### 3. Compile method 1  
Make sure you have pybind11 folder in your workspace  
(1)mkdir build && cd build && cmake..  
(2)make  
(3)cd ..  
(4)python Test.py  
### 4.Compile method 2 
Make sure you have installed pybind11  
g++ -O3 -Wall -shared -std=c++11 -fPIC `python3 -m pybind11 --includes` _lib.cpp -o libadd`python3-config --extension-suffix`  
### 