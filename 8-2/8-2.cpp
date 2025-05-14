#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; };
};

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle() {}
	NamedCircle(int radius, string name) : Circle(radius) {
		this->name = name;
	}
	void show() {
		cout << "�������� " << getRadius() << "�� " << name << endl;
	}
	string getName() { return name; }
	void setName(string name) { this->name = name; }
};

int main() {
	NamedCircle pizza[5];
	int radius, max;
	string name;

	cout << "5���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">> ";
		cin >> radius >> name;
		pizza[i].setRadius(radius);
		pizza[i].setName(name);
	}
	max = pizza[0].getRadius();
	int count;
	for (int i = 0; i < 5; i++)
	{
		if (max < pizza[i].getRadius())
		{
			max = pizza[i].getRadius();
			count = i;
		}
	}
	cout << "���� ������ ū ���ڴ� " << pizza[count].getName() << endl;
}
