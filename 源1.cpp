#include<iostream>
#include<string>
using namespace std;
//设计一个圆类，求圆的周长
const double pi = 3.14;
class c1 {
	int m_a;//私有
};
struct MyStruct
{
	int m_a;//公共
};
//class 代表设计一个类 ，类后面紧跟着类的名称
class cal {
	
public:
	//访问权限
	//属性
	int mr;
	//行为
	double calculatezc() {

		return 2 * pi * mr;
	}
};
class student {

private:
	int age;
	string name;
public:

	void agee(int a) {


		cout << "年龄：" << a << endl;
	}
	void namee(string a) {
		cout << "姓名：" << a << endl;

	}
	void  setname(string name1) {

		name = name1;
	}
	void  setname(int age1) {

		age = age1;
	}

};

int main()
{
	cal a;//通过园类 创建具体从园（对象）
	student c;
	//实例化（通过一个圆类 创建一个对象的过程)
	//给园对象的属性进行赋值
	a.mr = 10;
	cout << "周长" << a.calculatezc() << endl;
	c.agee(200);
	c.namee("李畅");
	MyStruct s;
	c1 b;
	b.m_a = 100;
	s.m_a = 100;





}

