#define _CRT_SECURE_NO_WARNINGS    // strcpy�� ���� ������ �������� ����
#include <iostream>
#include <cstring>
using namespace std;

class Person {
	char*name;
	int id;
public:
	Person(int id, const char*name);     // ������

	/*Person(const Person &Person) {
		this->id = person.id;                         ����Ʈ ���� ������(���� ����!!)
		this->name = person.name;
	}*/

	~Person();
	void changeName(const char *name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char * name)
{
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1]; //name���ڿ� �����Ҵ�
	strcpy(this->name, name);         // name������ ���ڿ� ����
}

Person::~Person()
{
	if (name) delete[]name;      // name �޸� ��ȯ
}

void Person::changeName(const char * name)
{
	if (strlen(name) > strlen(this->name)) return;
	strcpy(this->name, name);
}

int main() {
	Person father(1, "Kitae");
	Person daughter(father);  // ��������� ȣ�� -> ���Ǹ� ���ص��� ->  ����Ʈ ���� ������ ȣ��(shallow copy�� ���� !) 

	cout << "Daughter ��ü ���� ����______" << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "Daughter ��ü�� ���ڿ��� Grace�� ���� ���� -----" << endl;
	father.show();
	daughter.show();

	return 0;                  // ���Ͻ� daughter, father ��  But �޸��� �Ҹ��� 2�� �Ͼ�⶧���� �����߻� !! 
}
