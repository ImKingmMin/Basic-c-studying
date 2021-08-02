#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { this->radius = radius; }  // this ������ -> ��������� �̸��� �Ű������� �̸��� ������ ����!! !(�� �򰥸���)
	~Circle(){}
	void setRadius(int radius) { this->radius = radius; }
	double getArea();
};

double Circle::getArea()
{
	return 3.14*radius*radius;
}

int main() {
	cout << "�����ϰ��� �ϴ� ���� ����? ";
	int n, radius;
	cin >> n;

	Circle *pArray = new Circle[n];
	for (int i = 0; i < n; i++) {
		cout << "�� " << i+1 << "�� ������ : ";
		cin >> radius;
		pArray[i].setRadius(radius);
	}

	int count = 0;
	//Circle *p = pArray; // �̷��� �Է��ϰ� p->getArea();�� �Է��ص� �������

	for (int i = 0; i < n; i++) {
		cout << pArray[i].getArea() << " ";
		if (pArray[i].getArea() >= 100 && pArray[i].getArea() <= 200) {
			count++;
		}
	}
	cout << endl << "������ 100���� 200 ������ ���� ������ " << count << endl;

	Circle *p = pArray;

	delete[]pArray;
}