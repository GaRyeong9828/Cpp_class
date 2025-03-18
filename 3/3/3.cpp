#include <iostream>
using namespace std;

int main() {
	int result = 0;
	for (int i = 0; i < 10; i++) {
		result += (i + 1);

	}
	cout << "1에서 10까지 더한 결과는" << result << "입니다."  << endl;

	return 0;
}