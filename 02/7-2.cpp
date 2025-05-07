#include <iostream>
#include <string>
using namespace std;

class Book
{
	string title;
	int price, pages;
public:
	Book(string title = " ", int price = 0, int pages = 0){
		this->title = title; this->price = price; this->pages = pages;
	}
	void show(){
		cout << title << ' ' << price << "�� " << pages << "������" << endl;
	}
	string getTitle() { return title; }

	bool operator == (int price);
	bool operator == (string title);
	bool operator == (Book op);
};
bool Book::operator==(int price) {
	return this->price == price;
}
bool Book::operator==(string title) {
	return this->title == title;
}
bool Book::operator==(Book op) {
	if (this->title == op.title && this->price == op.price && this->pages == op.pages)
		return true;
	return false;
}
int main(){
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if (a == 30000) cout << "���� 30000��" << endl;
	if (a == "��ǰ C++") cout << "���� C++�Դϴ�." << endl;
	if (a == b) cout << "�� å�� ���� å�Դϴ�. " << endl;
}