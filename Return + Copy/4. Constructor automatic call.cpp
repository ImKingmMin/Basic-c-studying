#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person {
	char*name;
	int id;
public:
	Person(int id, const char*name);     
	Person(Person &person);         
	~Person();
	void changeName(const char *name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char * name)
{
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1]; 
	strcpy(this->name, name);       
	cout << "�⺻������ ���� ! " << endl;
}

Person::Person(Person & person)
{
	this->id = person.id;
	int len = strlen(person.name);                               
	this->name = new char[len + 1];
	strcpy(this->name, person.name);
	cout << "���� ������ ����. ���� ��ü�� �̸� " << this->name << endl;
}


Person::~Person()
{
	if (name) delete[]name;      
	cout << "�Ҹ��� ����" << endl;
}

void Person::changeName(const char * name)
{
	if (strlen(name) > strlen(this->name)) return;
	strcpy(this->name, name);
}

void f(Person person) {
	person.changeName("dummy");
}

Person g() {
	Person mother(2, "Jane");
	return mother;
}

int main() {
	Person father(1, "Kitae");  // �⺻ ������ ȣ��
	Person son = father;     // ��ü ġȯ -> �⺻������ X, ���������, �Ҹ��� ���� ȣ��
	f(father);    // ��ü�� �Ű������� ���°�� -> ���� ������ ȣ��, �Լ� ����� �ٷ� �Ҹ���ȣ��
	son.show();
	g();                     // ��ü���� -> ������, ��������� ,�Ҹ��� ���� ȣ��

	return 0;                  // ���Ͻ� mother, son, father
}

