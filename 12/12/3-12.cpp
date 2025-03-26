#include <iostream>
#include "Ram.h"
using namespace std;

int main() {
	Ram ram;
	ram.write(100, 20);
	ram.write(101, 30);
	char res = ram.read(100) + ram.read(101);
	ram.write(102, res);
	cout << "100 번지의 값 = " << (int)ram.read(100) << endl;
	cout << "101 번지의 값 = " << (int)ram.read(101) << endl;
	cout << "102 번지의 값(100번지의 값 + 101번지의 값) = " << (int)ram.read(102) << endl;
}