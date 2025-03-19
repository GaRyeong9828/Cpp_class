#include <iostream>
using namespace std;

int main()
{
	int choice, people;

	cout << "*****  승리짜장에 오신 것을 환영합니다.  *****" << endl;

	while (true)
	{
		cout << "짬뽕 : 1, 짜장 : 2, 군만두 : 3, 종료 : 4 >> ";
		cin >> choice;

		if (choice == 1)
		{
			cout << "몇 인분? > ";
			cin >> people;
			cout << "짬뽕 " << people << "인분 나왔습니다." << endl;
		}
		else if (choice == 2)
		{
			cout << "몇 인분? > ";
			cin >> people;
			cout << "짜장 " << people << "인분 나왔습니다." << endl;
		}
		else if (choice == 3)
		{
			cout << "몇 인분? > ";
			cin >> people;
			cout << "군만두 " << people << "인분 나왔습니다." << endl;
		}
		else if (choice == 4)
		{
			cout << "오늘은 영업이 끝났습니다. " << endl;
			break;
		}
		else
			cout << "다시 주문하세요!!" << endl;
	}

	return 0;
}