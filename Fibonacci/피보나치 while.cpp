#include <iostream>
using namespace std;


int main() {
	int n;
	int sum;
	int f1 = 1;
	int f2 = 0;
	cout << "Enter the number of terms " << endl;

	cin >> n;
	cout << "Fibonacci series " << endl;

		while (n>0) {
			sum = f1 + f2;
			f1 = f2;
			f2 = sum;
			                                     //  �̰� ����ü ��� �����س� ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
			cout << f2 << endl;
			n--;
		}

	return 0;
}
	
