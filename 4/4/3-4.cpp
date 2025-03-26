#include <iostream>
#include <string>
using namespace std;

class CoffeeMachine {

private:
	int coffee;
	int water;
	int sugar;
public:
	CoffeeMachine(int coffee, int water, int sugar) {
		this->coffee = coffee;
		this->water = water;
		this->sugar = sugar;
	}

	int drinkEspresso();
	int drinkAmericano();
	int drinkSugarCoffee();
	void fill() { coffee = 10; water = 10; sugar = 10; }
	void show() { cout << "커피 머신 상태," << "\t커피:" << coffee << "\t물:" << water << "\t설탕:" << sugar << endl; }
};

int CoffeeMachine::drinkEspresso()
{
	coffee = coffee - 1;
	water = water - 1;
	return coffee, water;
}
int CoffeeMachine::drinkAmericano()
{
	coffee = coffee - 1;
	water = water - 2;
	return coffee, water;
}
int CoffeeMachine::drinkSugarCoffee()
{
	coffee = coffee - 1;
	water = water - 2;
	sugar = sugar - 1;
	return coffee, water, sugar;
}

int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}