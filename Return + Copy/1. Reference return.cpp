#include <iostream>
using namespace std;

char& find(char s[], int index) {           // �迭 s�� index���� ������ ���� ������ �����ϴ� �Լ� ! 
	return s[index];                        // s[index]������ ���� ��������
}

int main() {
	char name[] = "mike";
	cout << name << endl;

	find(name, 0) = 's';
	cout << name << endl;

	char&ref = find(name, 2);
	ref = 't';
	cout << name << endl;
}

//------------------------------------//

char c = 'a';
char&find() {           //char Ÿ���� ��������
	return c;          // ���� c�� ���� ��������
}

char a = find();

char&ref = find();        // ref�� c�� ���� ����
ref = 'm'; // c='m'

find() = 'b'; // c= 'b'