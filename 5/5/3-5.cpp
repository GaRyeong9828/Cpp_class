#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random
{
public:
	Random();
	int next();
	int nextInRange(int low , int high);
};

Random::Random() {
	srand(time(NULL));
}

int Random::next()
{
	int n = rand();
	return n;
}

int Random::nextInRange(int low, int high)
{
	int n = rand() % (high - low + 1) + low;
	return n;
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
	cout << endl << endl << "-- 2에서 " << "4까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}
