#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Random.h"
using namespace std;

int main()
{
	string a, b;

	Random r;
	cout << "1���� 2���� ����(¦�� or Ȧ��)�� ���� �����ּ���(��: ¦�� Ȧ��) >> ";
	cin >> a >> b;
	r.inputKind(a, b);
	cout << "-- 0���� " << RAND_MAX << "������ ���� " << a << " ���� 10��--" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "10������ ���� " << b << " ���� 10��--" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}