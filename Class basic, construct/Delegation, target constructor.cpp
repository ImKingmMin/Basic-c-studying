//#include <iostream>
//using namespace std;
//
//class Point {
//	int x, y;
//public: 
//	Point();
//	Point(int a, int b);
//	void show() { cout << "(" << x << "," << y << ")" << endl; }
//};
//
//Point::Point() : Point(0,0){} // ���ӻ�����
//
//Point::Point(int a, int b) : x(a), y(b){} // Ÿ�ٻ�����1
////Point::Point(int a, int b) { x = 0; y = 0; } // Ÿ�ٻ�����2
//
//int main() {
//	Point origin;
//	Point target(10, 20);
//	origin.show();
//	target.show();
//}