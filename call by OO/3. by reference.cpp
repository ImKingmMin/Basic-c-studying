#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	~Circle();
	double getArea() { return 3.14*radius*radius; }
	void setRadius(int radius) { this->radius = radius; }
};

int main() {
	Circle circle;
	Circle &refc = circle;   // circle ��ü�� ���� ����
	refc.setRadius(10);
	cout << refc.getArea() << " " << circle.getArea();
}


//-----------------------------------------------------------//

void swap(int &a, int &b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int n = 2, m = 3;
	swap(n, m);
	cout << n << ' ' << m << endl;
}

//-------------------------------------------------------------//

void increase(Circle &c) {
	int r = c.getRadius();
	c.setRadius(r + 1);
}

int main() {
	Circle waffle(30);
	increase(waffle);        // ����ȣ���� ������, �Ҹ��� ��� ȣ�� x  **�̸��� �����ȴ� ����**
							
	cout << waffle.getRadius() << endl;
}

//---------------------------------------------------------//


