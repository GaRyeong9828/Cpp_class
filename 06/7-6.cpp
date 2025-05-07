#include <iostream>
using namespace std;

class Matrix {
	int a, b, c, d;
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
		this->a = a; this->b = b; this->c = c; this->d = d;
	}
	Matrix operator+(Matrix op);
	Matrix& operator+=(Matrix op);
	bool operator==(Matrix op);

	void show() {
		cout << "Matrix = { ";
		cout << a << ' ' << b << ' ' << c << ' ' << d;
		cout << " }" << endl;
	}
};
Matrix Matrix::operator+(Matrix op) {
	Matrix tmp;
	tmp.a = this->a + op.a; tmp.b = this->b + op.b; tmp.c = this->c + op.c; tmp.d = this->d + op.d;
	return tmp;
}
Matrix& Matrix::operator+=(Matrix op) {
	this->a += op.a; this->b += op.b; this->c += op.c; this->d += op.d;
	return *this;
}
bool Matrix::operator==(Matrix op) {
	return (this->a == op.a && this->b == op.b && this->c == op.c && this->d == op.d);
}

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();
	if (a == c)
		cout << "a and c are the same" << endl;
}
