//
// Created by xuejun on 23-5-11.
//
#include <iostream>
#include <vector>
#include <pybind11/stl.h>
#include <pybind11/pybind11.h>
using namespace std;
namespace py = pybind11;
class Base
{
public:
    Base(int a, int b,vector<int> c):a(a),b(b),v(c){}
    int add(){cout<<"add a and b"<<endl;return a+b;}
    void print()
    {
        for(auto n:v)
        {
            cout<<"vector element is "<<n<<" "<<flush;
            cout<<endl;
        }
    }
    vector<int> show()
    {
        auto vec = v;
        return v;
    }

    int c = 10;
    int d = 20;

private:
    int a;
    int b;
    vector<int> v;

};
int add_1(int a, int b)
{
    cout<<"fun has been called"<<endl;
    return a+b;
}
enum class Type:char {Sheep,Bat, Lion};

//普通函数封装为动态库
//PYBIND11_MODULE(libadd, m){
//    m.doc() = "pybind11 example";
//    m.def("add", &add_1, "add two number",py::arg("a")=1,py::arg("b")=2);
//}
//类及函数封装为动态库
PYBIND11_MODULE(libadd_, m) {     //(模块名，实例化对象)
    py::class_<Base>(m, "CT")    //"CT"为实例化的对象
            .def(py::init<int, int,vector<int>>())
            .def("add", &Base::add)  //(目标函数名，引用的实际函数)
            .def("print",&Base::print)
            .def("show",&Base::show)
            .def_readwrite("a",&Base::c)
            .def_readonly("d",&Base::d);
    py::enum_<Type>(m,"Type")
            .value("Sheep",Type::Sheep)
            .value("Lion",Type::Lion)
            .value("Bat",Type::Bat);
}

//