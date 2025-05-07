#include <iostream>
using namespace std;

class Matrix {
	int a, b, c, d;
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
		this->a = a; this->b = b; this->c = c; this->d = d;
	}
	friend Matrix operator+(const Matrix& op1, const Matrix& op2);
	friend Matrix& operator+=(Matrix& op1, const Matrix& op2);
	friend bool operator==(const Matrix& op1, const Matrix& op2);

	void show() {
		cout << "Matrix = { ";
		cout << a << ' ' << b << ' ' << c << ' ' << d;
		cout << " }" << endl;
	}
};
Matrix operator+(const Matrix& op1, const Matrix& op2) {
	Matrix tmp;
	tmp.a = op1.a + op2.a; tmp.b = op1.b + op2.b; tmp.c = op1.c + op2.c; tmp.d = op1.d + op2.d;
	return tmp;
}
Matrix& operator+=(Matrix& op1, const Matrix& op2) {
	op1.a += op2.a; op1.b += op2.b; op1.c += op2.c; op1.d += op2.d;
	return op1;
}
bool operator==(const Matrix& op1, const Matrix& op2) {
	return (op1.a == op2.a && op1.b == op2.b && op1.c == op2.c && op1.d == op2.d);
}
int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();
	if (a == c)
		cout << "a and c are the same" << endl;
}
