#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random
{
public:
	Random();
	int next();
	int nextInRange(int low, int high);
};

Random::Random() {
	srand(time(NULL));
}

int Random::next()
{
	while (true) {

		int n = rand();
		if (n % 2 == 0)
		{
			return n;
		}
	}
}

int Random::nextInRange(int low, int high)
{
	while (true)
	{
		int n = rand() % (high - 1) + low;
		if (n % 2 == 0)
		{
			return n;
		}
	}
}

int main()
{
	Random r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "10������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}
