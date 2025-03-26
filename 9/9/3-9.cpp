#include <iostream>
using namespace std;

class Oval {
	int width, height;

public:
	Oval(int widht, int height);
	Oval() {
		width = 1;
		height = 1;
	}
	~Oval();
	int getWidth();
	int getHeight();
	void set(int width, int height);
	void show();
};

Oval::Oval(int width, int height) {
	this->width = width;
	this->height = height;
}

Oval::~Oval() { cout << "Oval ¼Ò¸ê : width = " << width << ", height = " << height << endl; }

int Oval::getWidth() { return width; }
int Oval::getHeight() { return height; }

void Oval::set(int width, int height) {
	this->width = width;
	this->height = height;
}
void Oval::show() {cout << "Width = " << width << " Height = " << height << endl;}

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << "," << b.getHeight() << endl;
}