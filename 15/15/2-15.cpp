#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b;
	char* op;
	char s[100];

	while (true)
	{
		cout << "? ";
		cin.getline(s,100);

		a = atoi(strtok(s, " "));
		op = strtok(NULL, " ");
		b= atoi(strtok(NULL, " "));

		if (*op == '+') {
			cout << a << " + " << b << " = " << a + b << endl;
		}
		else if (*op == '-') {
			cout << a << " - " << b << " = " << a - b << endl;
		}
		else if (*op == '*') {
			cout << a << " * " << b << " = " << a * b << endl;
		}
		else if (*op == '/') {
			cout << a << " / " << b << " = " << a / b << endl;
		}
		else if (*op == '%') {
			cout << a << " % " << b << " = " << a % b << endl;
		}
		else {
			cout << "�߸� �Է��Ͽ����ϴ�. �ٽ� �õ��ϼ���!" << endl;
		}
	}

	return 0;
}
