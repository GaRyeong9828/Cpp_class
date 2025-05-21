#include <iostream>
using namespace std;

class LoopAdder
{
	string name;
	int x, y, sum;
	void read();
	void write();
protected:
	LoopAdder(string name = "") { this->name = name; }
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0;
public:
	void run();
};

void LoopAdder::read() {
	cout << name << ":" << endl;
	cout << "ó�� ������ �ι�° ������ ���մϴ�. �� ���� �Է��ϼ��� >> ";
	cin >> x >> y;
}
void LoopAdder::write() {
	cout << x << "���� " << y << "������ �� = " << sum << " �Դϴ�" << endl;
}

void LoopAdder::run() {
	read();
	sum = calculate();
	write();
}

class whileLoopAdder : public LoopAdder {
protected:
	string name;
	int calculate() {
		int sum = 0;
		int x = getX();
		int y = getY();
		while (x <= y) {
			sum += x;
			x++;
		}
		return sum;
	}
public:
	whileLoopAdder(string name) : LoopAdder(name) { this->name = name; }
};

class DoWhileLoopAdder : public LoopAdder {
protected:
	string name;
	int calculate() {
		int sum = 0;
		int x = getX();
		int y = getY();
		do {
			sum += x;
			x++;
		} while (x <= y);
		return sum;
	}
public:
	DoWhileLoopAdder(string name) : LoopAdder(name) { this->name = name; }
};

int main()
{
	whileLoopAdder whileLoop("While Loop");
	DoWhileLoopAdder doWhileLoop("Do While Loop");

	whileLoop.run();
	doWhileLoop.run();
}