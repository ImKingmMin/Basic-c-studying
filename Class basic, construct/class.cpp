//#include <iostream>
//using namespace std;
//
//class Circle {
//public :
//	int radius;
//	Circle();      // ���ӻ�����
//	Circle(int r); // Ÿ�ٻ�����
//	double getArea();
//};
//
//Circle::Circle() :Circle(1){}
//
//Circle::Circle(int r)
//{
//	radius = r;
//    cout << "������ " << radius << "�� ����" << endl;
//}
//
//double Circle::getArea() {
//	return 3.14*radius*radius;
//}
//
//int main() {
//	Circle donut;   // �Ű��������� ������ ȣ��
//	double area = donut.getArea();  
//	cout << "Donut ������ " << area << endl;
//
//	Circle pizza(30);
//	area = pizza.getArea();
//	cout << "Pizza ������ " << area << endl;
//}