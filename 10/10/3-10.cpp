#include <iostream>
using namespace std;

class Add {
	int a, b;
public:
	void setValue(int x, int y) {a = x; b = y;}
	int calculate() { return a + b; }
};
class Sub {
	int a, b;
public:
	void setValue(int x, int y) {a = x; b = y;}
	int calculate() { return a - b; }
};
class Mul {
	int a, b;
public:
	void setValue(int x, int y) {a = x; b = y;}
	int calculate() { return a * b; }
};
class Div {
	int a, b;
public:
	void setValue(int x, int y) {a = x; b = y;}
	int calculate() { return a / b; }
};

int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;

	int x, y;
	char op;
	while (true) {
		cout << "�� ������ �����ڸ� �Է��ϼ���>> " ;
		cin >> x >> y >> op;
		if (op == '+') {
			a.setValue(x, y);
			cout << a.calculate() << endl;
		}
		else if (op == '-') {
			s.setValue(x, y);
			cout << s.calculate() << endl;
		}
		else if (op == '*') {
			m.setValue(x, y);
			cout << m.calculate() << endl;
		}
		else if (op == '/') {
			d.setValue(x, y);
			cout << d.calculate() << endl;
		}
		else {
			cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���." << endl;
		}
	}
}