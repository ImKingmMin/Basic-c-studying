#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	Power operator++(int x);
};

void Power::show() {
	cout << "Kick = " << kick << "," << " Punch = " << punch << endl;
}

Power Power::operator++(int x) // ������ �Ű������� ��������<�ϱ�>
{
	Power tmp = *this;       // ���� ������ ��ü ���¸� �ӽÿ� ���� 
	kick++;
	punch++;
	return tmp;
}

int main() {
	Power a(3, 5), b(4, 6), c;

	a.show();
	b.show();
	b = a++;  // ������� 1. b = a  2. a++
	a.show();
	b.show();

}

