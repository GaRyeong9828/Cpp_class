#include <iostream>
#include <string>
using namespace std;

class Integger {
	int n;
public:
	Integger(int n) {
		this->n = n;
	}
	Integger(string nums) {
		n = stoi(nums);
	}
	int get(){ return n; }
	void set(int n) {
		this->n = n;
	}
	bool isEven() { return true; }
};
int main() {
	Integger n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integger m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}