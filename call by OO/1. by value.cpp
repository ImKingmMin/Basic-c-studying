#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea() { return 3.14*radius*radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int radius)
{
	this->radius = radius;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle()
{
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

void increase(Circle c) {
	int r = c.getRadius();
	c.setRadius(r + 1);
}

int main() {
	Circle waffle(30);
	increase(waffle);        // �Ű����� ��ü�� �����ڴ� ȣ��������� !! But ���� �����ڿ� �Ҹ��ڴ� ȣ��� ! 
	                        // + call by value�̱� ������ main stack�� waffle�� ���� �ٲ�������.
							//���� main������ ���� 31�� �ٲٰ������ call by reference �̿��ϸ�ȴ� ! 
	cout << waffle.getRadius() << endl;
}
