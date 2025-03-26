#include <iostream>
#include <string>
using namespace std;

class Account
{
	int id, balance;
	string owner;

public:
	Account(string owner, int id, int balance) {
		this->owner = owner;
		this->id = id;
		this->balance = balance; 
	}
	string getOwner() { return owner; }
	int deposit(int balance) {
		this->balance += balance;

		return this->balance;
	}
	int withdraw(int balance) {
		this->balance -= balance; 

		return this->balance;
	}
	int inquiry() { return balance; }
};

int main()
{
	Account a("Kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;

	return 0;
}