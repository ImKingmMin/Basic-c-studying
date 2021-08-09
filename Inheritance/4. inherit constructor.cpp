#include<iostream>
#include<string>
using namespace std;

class TV {
	int size;
public:
	TV() { size = 20; }
	TV(int size) { this->size = size; }
	int getsize() { return size; }
};

class WideTV :public TV {
	bool videoln;
public:
	WideTV(int size, bool videoln) : TV(size) {
		this->videoln = videoln;
	}
	bool getvideoln() { return videoln; }
};

class SmartTV :public WideTV {
	string ipAddr;
public:
	SmartTV(string ipAdder, int size) : WideTV(size, true) {
		this->ipAddr = ipAdder;
	}
	string getipAddr() { return ipAddr; }
};


int main() {
	SmartTV htv("192.0.0.1", 32);      //    wideTv ������ ȣ��-> Tv������ ȣ�� -> Tv������ ���� -> wideTV ������ ����
	cout << "size = " << htv.getsize() << endl;
	cout << "videoln = " << boolalpha << htv.getvideoln() << endl;  // boolalpha  0,1�� true or false�� ������ִ� ��ɾ�! 
	cout << "IP = " << htv.getipAddr() << endl;
}