#pragma once
#ifndef RANDOM_H
#define RANDOM_H

#include <string>
using namespace std;

class Random
{
	string a, b;
public:
	Random();
	int next();
	int nextInRange(int low, int high);
	void inputKind(string a, string b) {
		this->a = a;
		this->b = b;
	}
};

#endif