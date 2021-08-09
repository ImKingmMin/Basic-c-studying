#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y;
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() { cout << x << ", " << y << endl; }
};

class ColorPoint : public Point {    // base class public����
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << endl;
	showPoint();  // base class�� ����Լ� ȣ��
}

int main() {
	ColorPoint cp;
	ColorPoint *pDer;
	Point *pBase= &cp;  // ��ĳ���� : �⺻Ŭ���� ������->�Ļ�Ŭ������ ��ü

	pDer = (ColorPoint *)pBase; // �ٿ�ĳ���� :  �⺻Ŭ���� ������(���� Ÿ�Ժ�ȯ)->�Ļ�Ŭ���� ������
	pDer->setColor("Red");
	pDer->showColorPoint();
}