#include <iostream>
#include <ctime> // time function
#include <cstdlib> // rand -> ���� �� �� ���� ��Ģ���� ���� ����(**��Ģ��), srand ->  �ð����� �Ű��� �ʱ�ȭ�ϸ� ���������ʰ� �ұ�Ģ�� ���� ����! ! !

using namespace std;

int rolldice();

int rolldice() {
	int die1 = 1 + rand() % 6;
	int die2 = 1 + rand() % 6;
	int sum = die1 + die2;

	cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << endl;

	return sum;
}

int main() {

	enum status { draw, won, lost }; // enum�� ������Ÿ�� status�� identifier(Ȯ���� -> Ŭ����,��ӿ� ������ ����)�̴�. draw = 0, won =1, lost = 2

	int mypoint;
	status gamestatus;  // ���� ����

	srand(time(0)); // �ʱ�ȭ���� �ұ�Ģ�� ������ �����ϴ� �Լ�(time�� seed). �Լ� ��ȣ�ȿ� ��� ���ڴ� �־ �������

	int sumofdice = rolldice();

	switch (sumofdice)
	{
	case 7:
	case 11:
		gamestatus = won;
		break;
	case 2:
	case 3:
	case 12:
		gamestatus = lost;
		break;

	default:
		gamestatus = draw;
		mypoint = sumofdice;
		cout << "Point is " << mypoint << endl;
		break;
	}

	while (gamestatus == draw)
	{
		sumofdice = rolldice();
		if (sumofdice == mypoint) gamestatus = won;
		else if (sumofdice == 7) gamestatus = lost;

	}
	if (gamestatus == won) cout << "player wins " << endl;
	else cout << "player loses " << endl;

	return 0;

}
