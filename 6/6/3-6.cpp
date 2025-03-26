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
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "10까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}
