#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i <= 9; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << j + (10 * i) << '\t';
		}
		cout << '\n';
	}
	return 0;
}
