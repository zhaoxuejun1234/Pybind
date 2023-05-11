//
// Created by xuejun on 23-5-11.
//
#include <iostream>
#include <pybind11/pybind11.h>
//#include<pybind11/detail/common.h>
using namespace std;
namespace py = pybind11;
class Base
{
public:
    Base(int a, int b):a(a),b(b){}
    int add(){cout<<"add a and b"<<endl;return a+b;}

private:
    int a;
    int b;

};
int add_1(int a, int b)
{
    cout<<"fun has been called"<<endl;
    return a+b;
}
PYBIND11_MODULE(libadd, m){
    m.doc() = "pybind11 example";
    m.def("add", &add_1, "add two number",py::arg("a")=1,py::arg("b")=2);
}
