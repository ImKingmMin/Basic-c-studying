#include <iostream>
using namespace std;

class Myvector {
	int *p;
	int size;
public:
	Myvector(int n = 100) {
		p = new int[n];                   // 1. ����Ʈ�� �̿��� ����ȭ
		size = n;
	}

	/*Myvector() :Myvector(100){} */   // 2. ���� �� Ȥ�� ���ӻ����ڷ� ��Ÿ���� ����ȭ

	~Myvector() { delete[]p; }
};