#include<iostream>
using namespace std;

#include"8-9.h"

int main() {
    AirlineBook* air = new AirlineBook();
    cout << "***** �Ѽ��װ��� ���Ű��� ȯ���մϴ� *****\n\n";
    air->start();
    delete air;
}