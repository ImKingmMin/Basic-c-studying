#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle() :Circle(1) {}

Circle::Circle(int r)
{
	radius = r;
	cout << "������ " << radius << "�� ����" << endl;
}

Circle::~Circle() {
	cout << "������ " << radius << "�� �Ҹ�" << endl;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}

Circle globalDount(1000);
Circle globalPizza(2000);        // ������ü( ���� ���� , ���α׷� ����� �������� �Ҹ� )

void f() {
	Circle mainDonut;
	Circle mainPizza(30);
}

int main() {
	Circle mainDonut;           // ������ü ( ������ü �������� ����, �Լ� ����� �������� �Ҹ� )
	Circle mainPizza;
	f();
}