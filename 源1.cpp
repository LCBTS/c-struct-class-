#include<iostream>
#include<string>
using namespace std;
//���һ��Բ�࣬��Բ���ܳ�
const double pi = 3.14;
class c1 {
	int m_a;//˽��
};
struct MyStruct
{
	int m_a;//����
};
//class �������һ���� �������������������
class cal {
	
public:
	//����Ȩ��
	//����
	int mr;
	//��Ϊ
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


		cout << "���䣺" << a << endl;
	}
	void namee(string a) {
		cout << "������" << a << endl;

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
	cal a;//ͨ��԰�� ���������԰������
	student c;
	//ʵ������ͨ��һ��Բ�� ����һ������Ĺ���)
	//��԰��������Խ��и�ֵ
	a.mr = 10;
	cout << "�ܳ�" << a.calculatezc() << endl;
	c.agee(200);
	c.namee("�");
	MyStruct s;
	c1 b;
	b.m_a = 100;
	s.m_a = 100;





}

