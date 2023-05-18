
from build import libadd_
import numpy as np
#枚举类型访问
enum = libadd_.Type
#C++与python之间的类型转换，wrap和pybind11::buffer
#list，tuple可转化为vector直接访问，复杂类型需要通过内存拷贝进行
print(enum(0).name,enum(1).value)  

m = np.arange(10).reshape(10,1)
#初始化对象
obj = libadd_.CT(1,3,m)
copy = obj.show()
print("copy value is {}".format(copy))
sum =obj.add()          #调用普通成员函数
obj.print()             #调用访问STL vector的函数
obj.a=300               #可变值重新v值
print("c为{}，d为{}".format(obj.a,obj.d))
print("add result result is",sum)