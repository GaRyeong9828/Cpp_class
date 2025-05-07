#include <iostream>
#include <string>
using namespace std;

class Color{
	int red, green, blue;
public:
	Color() { red = green = blue = 0; }
	Color(int r, int g, int b) { red = r; green = g; blue = b; }
	void setColor(int r, int g, int b) { red = r; green = g; blue = b; }

	friend Color operator + (Color op1, Color op2);
	friend bool operator == (Color op3, Color fu){
		if (op3.red == fu.red && op3.green == fu.green && op3.blue == fu.blue)
			return true;
		else
			return false;
	}
	void show() {
		cout << red << ' ' << green << ' ' << blue << endl;
	}
};
Color operator + (Color op1, Color op2){
	Color tmp;
	tmp.red = op1.red + op2.red;
	tmp.green = op1.green + op2.green;
	tmp.blue = op1.blue + op2.blue;
	return tmp;
}

int main(){
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
}