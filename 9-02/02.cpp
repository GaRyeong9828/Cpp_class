#include <iostream>
#include <string>
using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0;
	virtual string getSourceString() = 0;
	virtual string getDestString() = 0;
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};

class kmToMile : public Converter {
protected:
	virtual string getSourceString() { return "Km"; }
	virtual string getDestString() { return "Mile"; }
	virtual double convert(double src);

public:
	kmToMile(double ratio) : Converter(ratio) { }
};
double kmToMile::convert(double src) {
	return src / ratio;
}

int main() {
	kmToMile toMile(1.609344);
	toMile.run();
}