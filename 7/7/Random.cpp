#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Random.h"
using namespace std;

Random::Random() {
	srand(time(NULL));
}


int Random::next()
{
	while (true)
	{
		int n = rand();
		if (a == "¦��")
		{
			if (n % 2 == 0)
			{
				return n;
			}
		}
		else if (a == "Ȧ��")
		{
			if (n % 2 == 1)
			{
				return n;
			}
		}
	}
}

int Random::nextInRange(int low, int high)
{
	while (true)
	{
		int n = rand() % (high - 1) + low;
		if (b == "¦��")
		{
			if (n % 2 == 0)
			{
				return n;
			}
		}
		else if (b == "Ȧ��")
		{
			if (n % 2 == 1)
			{
				return n;
			}
		}
	}
}