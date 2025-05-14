#include<iostream>
using namespace std;

class PrintMachine
{
    string model, manufacturer;
    int pcount, avaliablecount;
protected:
    PrintMachine(string model, string manufacturer, int avaliablecount) {
        this->model = model;
        this->manufacturer = manufacturer;
        this->avaliablecount = avaliablecount;
    }
    bool print(int pages) {
        if (avaliablecount < pages) {
            cout << "용지가 부족하여 프린트 할 수 없습니다." << endl;
            return false;
        }
        avaliablecount -= pages;
        return true;
    }
    string getModel() { return model; }
    string getmManufacturer() { return manufacturer; }
    int getAvaliablecount() { return avaliablecount; }
};

class PrintInkJet : public PrintMachine {
    int avlink;
public:
    PrintInkJet(string model, string manuf, int avlcount, int avlink) : PrintMachine(model, manuf, avlcount) {
        this->avlink = avlink;
    }
    bool printInkJet(int pages) {
        if (!print(pages))
            return false;
        if (avlink < pages) {
            cout << "잉크가 부족하여 프린트 할 수 없습니다."<<endl;
            return false;
        }
        avlink -= pages;
        return true;
    }
    void show() {
        cout << getModel() << "\t," << getmManufacturer() << "\t,남은 종이 " <<
            getAvaliablecount() << "장\t,남은 잉크 " << avlink << endl;
    }
};

class PrintLaser : public PrintMachine {
    int avltoner;
public:
    PrintLaser(string model, string manuf, int avlcount, int avltoner) : PrintMachine(model, manuf, avlcount) {
        this->avltoner = avltoner;
    }
    bool printLaser(int pages) {
        if (!print(pages))
            return false;
        if (avltoner < pages) {
            cout << "토너가 부족하여 프린트 할 수 없습니다.\n";
            return false;
        }
        avltoner -= pages;
        return true;
    }
    void show() {
        cout << getModel() << " ," << getmManufacturer() << "\t,남은 종이 " <<
            getAvaliablecount() << "장\t,남은 토너 " << avltoner << endl;
    }
};

int main() {
    int pnum, pages;
    char yon;
    PrintInkJet* inkjet = new PrintInkJet("Officejet V40", "Hp", 5, 10);
    PrintLaser* laser = new PrintLaser("SCX-6x45", "삼성전자", 3, 20);

    cout << "현재 작동중인 2 대의 프린터는 아래와 같다\n";
    cout << "잉크젯 : ";
    inkjet->show();
    cout << "레이저 : ";
    laser->show();
    cout << endl;

    while (true) {
        cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
        cin >> pnum >> pages;
        if (pnum == 1)
            if (inkjet->printInkJet(pages))
                cout << "프린트 하였습니다.\n";
        if (pnum == 2)
            if (laser->printLaser(pages))
                cout << "프린트 하였습니다.\n";
        if (pnum != 1 && pnum != 2)
            cout << "프린터를 잘못 선택하셨습니다.\n";

        inkjet->show();
        laser->show();

        while (true) {
            cout << "계속 프린트 하시겠습니까(y/n)>>";
            cin >> yon;
            cout << endl;
            if (yon == 'n')
                return 0;
            else if (yon == 'y')
                break;
            else
                cout << "잘못 입력하셨습니다.\n";
        }
    }

    delete inkjet;
    delete laser;
}

