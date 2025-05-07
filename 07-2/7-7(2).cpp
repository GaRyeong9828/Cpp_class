#include <iostream>
using namespace std;

class Matrix {
	int arr[4];
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
		arr[0] = a; arr[1] = b; arr[2] = c; arr[3] = d;
	}
	friend void operator>>(const Matrix& op, int m[4]);
	friend Matrix& operator<<(Matrix& op, int m[4]);

	void show() {
		cout << "Matrix = { ";
		for (int i = 0; i < 4; i++)
			cout << arr[i] << ' ';
		cout << "}" << endl;
	}
};
void operator>>(const Matrix& op, int m[4]) {
	for (int i = 0; i < 4; i++)
		m[i] = op.arr[i];
}
Matrix& operator<<(Matrix& op, int m[4]) {
	for (int i = 0; i < 4; i++)
		op.arr[i] = m[i];
	return op;
}

int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1, 2, 3, 4 };

	a >> x;
	b << y;

	for (int i = 0; i < 4; i++)
		cout << x[i] << ' ';
	cout << endl;

	b.show();
}

