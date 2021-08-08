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
	friend Power& operator++(Power &op1);  
	friend Power operator++(Power& op2, int x);
};

void Power::show() {
	cout << "Kick = " << kick << "," << " Punch = " << punch << endl;
}

Power& operator++(Power &op)         // ����Ÿ�� power&�� return�ϴ� ��ü�� ���� ���� op1(����ü) , �Ű������� ������ op�� ���� �ܺο��� ���� �ٲٱ⶧���� �ʿ���
{
	op.kick++;
	op.punch++;
	return op;
}

Power operator++(Power& op, int x)      // ����Ÿ�� power&�� return�ϴ� ��ü�� ���� ���� tmp(�ӽð�ü), �Ű������� ������ op�� ���� �ܺο��� ���� �ٲٱ⶧���� �ʿ���
{
	Power tmp = op;     // ��ü ġȯ
	op.kick++;
	op.punch++;
	return tmp;

}

int main() {
	Power a(3, 5), b;

	b = ++a;
	a.show();
	b.show();
	
	b = a++;
	a.show();
	b.show();

}

