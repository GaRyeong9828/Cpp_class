#include <iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0;
	virtual bool pop(int& n) = 0;
	virtual int size() = 0;
};

class IntStack : public AbstractStack {
	int capacity;
	int top;
	int* p;
public:
	IntStack(int size);
	~IntStack();
	bool push(int n);
	bool pop(int& n);
	int size() { return top; }
	void show();
};

IntStack::IntStack(int size) {
	p = new int[size];
	this->capacity = size;
	top = 0;
}

IntStack::~IntStack() {
	if (p)
		delete[] p;
}

bool IntStack::push(int n) {
	if (top >= capacity) {
		cout << "스택이 다 찼습니다." << endl;
		return false;
	}

	p[top] = n;
	top++;
	return true;
}

bool IntStack::pop(int& n) {
	if (top == 0) {
		cout << "스택이 비어있습니다." << endl;
		return false;
	}
	top--;
	n = p[top];
	return true;
}

void IntStack::show() {
	cout << "| ";
	for (int i = 0; i < top; i++) {
		cout << p[i] << ' ';
	}
	cout << "|" << endl;
}

int main() {
	IntStack intstack(5);

	for (int i = 0; i < 5; i++) {
		intstack.push(i + 1);
	}

	intstack.show();

	int n;
	intstack.pop(n);
	cout << n << " is popped" << endl;
	intstack.show();

	return 0;
}
