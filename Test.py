
from build import libadd_

#枚举类型访问
enum = libadd_.Type
print(enum(0).name,enum(1).value)

#初始化对象
obj = libadd_.CT(1,3,[4,5])
sum =obj.add()          #调用普通成员函数
obj.print()             #调用访问STL vector的函数
obj.a=300               #可变值重新v值
print("c为{}，d为{}".format(obj.a,obj.d))
print("add result result is",sum)