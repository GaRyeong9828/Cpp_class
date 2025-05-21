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
    virtual bool print(int pages) {
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
    virtual bool printInkJet(int pages) {
        if (!print(pages))
            return false;
        if (avlink < pages) {
            cout << "��ũ�� �����Ͽ� ����Ʈ �� �� �����ϴ�." << endl;
            return false;
        }
        avlink -= pages;
        return true;
    }
    virtual void show() {
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
    virtual bool printLaser(int pages) {
        if (!print(pages))
            return false;
        if (avltoner < pages) {
            cout << "��ʰ� �����Ͽ� ����Ʈ �� �� �����ϴ�." << endl;
            return false;
        }
        avltoner -= pages;
        return true;
    }
    virtual void show() {
        cout << getModel() << " ," << getmManufacturer() << "\t,���� ���� " <<
            getAvaliablecount() << "��\t,���� ��� " << avltoner << endl;
    }
};

int main() {
    int num, pages;
    char choose;
    PrintInkJet* inkjet = new PrintInkJet("Officejet V40", "Hp", 5, 10);
    PrintLaser* laser = new PrintLaser("SCX-6x45", "�Ｚ����", 3, 20);

    cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����" << endl;
    cout << "��ũ�� : ";
    inkjet->show();
    cout << "������ : ";
    laser->show();
    cout << endl;

    while (true) {
        cout << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
        cin >> num >> pages;
        if (num == 1)
            if (inkjet->printInkJet(pages))
                cout << "����Ʈ �Ͽ����ϴ�." << endl;
        if (num == 2)
            if (laser->printLaser(pages))
                cout << "����Ʈ �Ͽ����ϴ�." << endl;
        if (num != 1 && num != 2)
            cout << "�����͸� �߸� �����ϼ̽��ϴ�." << endl;

        inkjet->show();
        laser->show();

        while (true) {
            cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
            cin >> choose;
            cout << endl;
            if (choose == 'n')
                return 0;
            else if (choose == 'y')
                break;
            else
                cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
        }
    }

    delete inkjet;
    delete laser;
}

