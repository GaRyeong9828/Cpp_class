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
            cout << "������ �����Ͽ� ����Ʈ �� �� �����ϴ�." << endl;
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
            cout << "��ũ�� �����Ͽ� ����Ʈ �� �� �����ϴ�."<<endl;
            return false;
        }
        avlink -= pages;
        return true;
    }
    void show() {
        cout << getModel() << "\t," << getmManufacturer() << "\t,���� ���� " <<
            getAvaliablecount() << "��\t,���� ��ũ " << avlink << endl;
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
            cout << "��ʰ� �����Ͽ� ����Ʈ �� �� �����ϴ�.\n";
            return false;
        }
        avltoner -= pages;
        return true;
    }
    void show() {
        cout << getModel() << " ," << getmManufacturer() << "\t,���� ���� " <<
            getAvaliablecount() << "��\t,���� ��� " << avltoner << endl;
    }
};

int main() {
    int pnum, pages;
    char yon;
    PrintInkJet* inkjet = new PrintInkJet("Officejet V40", "Hp", 5, 10);
    PrintLaser* laser = new PrintLaser("SCX-6x45", "�Ｚ����", 3, 20);

    cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����\n";
    cout << "��ũ�� : ";
    inkjet->show();
    cout << "������ : ";
    laser->show();
    cout << endl;

    while (true) {
        cout << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
        cin >> pnum >> pages;
        if (pnum == 1)
            if (inkjet->printInkJet(pages))
                cout << "����Ʈ �Ͽ����ϴ�.\n";
        if (pnum == 2)
            if (laser->printLaser(pages))
                cout << "����Ʈ �Ͽ����ϴ�.\n";
        if (pnum != 1 && pnum != 2)
            cout << "�����͸� �߸� �����ϼ̽��ϴ�.\n";

        inkjet->show();
        laser->show();

        while (true) {
            cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
            cin >> yon;
            cout << endl;
            if (yon == 'n')
                return 0;
            else if (yon == 'y')
                break;
            else
                cout << "�߸� �Է��ϼ̽��ϴ�.\n";
        }
    }

    delete inkjet;
    delete laser;
}

