#include<iostream>
using namespace std;

#include"8-9.h"

int main() {
    AirlineBook* air = new AirlineBook();
    cout << "***** �Ѽ��װ��� ���Ű��� ȯ���մϴ� *****"<< endl << endl;
    air->start();
    delete air;
}