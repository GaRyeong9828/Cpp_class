#include <iostream>
using namespace std;

int main()
{
	int choice, people;

	cout << "*****  �¸�¥�忡 ���� ���� ȯ���մϴ�.  *****" << endl;

	while (true)
	{
		cout << "«�� : 1, ¥�� : 2, ������ : 3, ���� : 4 >> ";
		cin >> choice;

		if (choice == 1)
		{
			cout << "�� �κ�? > ";
			cin >> people;
			cout << "«�� " << people << "�κ� ���Խ��ϴ�." << endl;
		}
		else if (choice == 2)
		{
			cout << "�� �κ�? > ";
			cin >> people;
			cout << "¥�� " << people << "�κ� ���Խ��ϴ�." << endl;
		}
		else if (choice == 3)
		{
			cout << "�� �κ�? > ";
			cin >> people;
			cout << "������ " << people << "�κ� ���Խ��ϴ�." << endl;
		}
		else if (choice == 4)
		{
			cout << "������ ������ �������ϴ�. " << endl;
			break;
		}
		else
			cout << "�ٽ� �ֹ��ϼ���!!" << endl;
	}

	return 0;
}