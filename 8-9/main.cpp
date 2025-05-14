#include<iostream>
using namespace std;

#include"8-9.h"

int main() {
    AirlineBook* air = new AirlineBook();
    cout << "***** 한성항공에 오신것을 환영합니다 *****"<< endl << endl;
    air->start();
    delete air;
}