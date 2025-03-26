#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Random.h"
using namespace std;

int main()
{
	string a, b;

	Random r;
	cout << "1번과 2번의 종류(짝수 or 홀수)를 각각 정해주세요(예: 짝수 홀수) >> ";
	cin >> a >> b;
	r.inputKind(a, b);
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 " << a << " 정수 10개--" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "10까지의 랜덤 " << b << " 정수 10개--" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}