#include <iostream>
#include <cstring>

using namespace std;

int main() {

	char nameofgame[20];
	int player,pnum;
	int cnum = 0;

	cout << "���� �̸� : ";
	cin.getline(nameofgame, 20, '\n');

	cout << "����(0) �İ�(1) ?" << endl;

	cin >> player;
	if (player == 0) {
		cout << "����� : ";
		cin >> pnum;

		if (pnum != 1) {
			cout << "��ǻ�� : ���� 1���� �����̶�ϱ� ����";
		}
		else {
			while (1) {  // while �ȿ� 1�� ������ ���ѷ���
				
				if (pnum != cnum + 1) {
					cout << "��ǻ�� : ���� " << cnum + 1 << "�ε� �޷ո޷� �ٺ��ٺ�" << endl;
					break;
				}
				cnum = pnum + 1;
				cout << "��ǻ�� : " << cnum << endl;
				
				cout << "����� : "; cin >> pnum;
			}
		}
	}
	else if(player == 1) {
		cnum = 1;
		while (1) {
			cout << "��ǻ�� : " << cnum << endl;
			cout << "����� : "; cin >> pnum;
			if(pnum!=cnum+1) {
				cout << "��ǻ�� : ���� " << cnum + 1 << "�ε� �޷ո޷� �ٺ��ٺ�" << endl;
				break;
			}
			cnum = cnum + 2;
		}
	}

	return 0;
}
