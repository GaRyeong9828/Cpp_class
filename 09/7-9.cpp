#include <iostream>
#include <string>
using namespace std;

class Circle{
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	friend Circle operator + (int x, Circle op);
	void show() { cout << "radius = " << radius << " ÀÎ ¿ø" << endl; }
};

Circle operator + (int x, Circle op){
	int tmp = x + op.radius;
	return tmp;
}

int main(){
	Circle a(5), b(4);
	b = 1 + a;
	a.show();
	b.show();
}