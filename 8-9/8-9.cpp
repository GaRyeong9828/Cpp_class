#include<iostream>
using namespace std;

#include"8-9.h"

int Console::select_menu() {
    cout << "����:1, ���:2, ����:3, ������:4>> ";
    int m;
    cin >> m;
    return m;
}

int Console::select_time() {
    cout << "07��:1, 12��:2, 17��:3>> ";
    int t;
    cin >> t;
    return t;
}

int Console::input_seat_num() {
    cout << "�¼� ��ȣ>> ";
    int s;
    cin >> s;
    if (s < 1 || 8 < s) {
        cout << "���� �¼� ��ȣ �Դϴ�. ó�� �޴��� ���ư��ϴ�." << endl;
        return 0;
    }
    return s;
}

string Console::input_name() {
    cout << "�̸� �Է�>> ";
    string n;
    cin >> n;
    return n;
}

void AirlineBook::start() {
    while (true) {
        m = Console::select_menu();
        if (m == 1 || m == 2) {
            t = Console::select_time();
            if (m == 1) {
                switch (t) {
                case 1: {
                    schedule[0].show_schedule();
                    int s = Console::input_seat_num();
                    if (s == 0)
                        break;
                    string n = Console::input_name();
                    schedule[0].set_resv(s, n);
                    break;
                }
                case 2: {
                    schedule[1].show_schedule();
                    int s = Console::input_seat_num();
                    if (s == 0)
                        break;
                    string n = Console::input_name();
                    schedule[1].set_resv(s, n);
                    break;
                }
                case 3: {
                    schedule[2].show_schedule();
                    int s = Console::input_seat_num();
                    if (s == 0)
                        break;
                    string n = Console::input_name();
                    schedule[2].set_resv(s, n);
                    break;
                }
                case 4:
                    cout << "�߸� �����ϼ̽��ϴ�. ó�� �޴��� ���ư��ϴ�." << endl;
                }
            }
            else {
                switch (t) {
                case 1: {
                    schedule[0].show_schedule();
                    int s = Console::input_seat_num();
                    if (s == 0)
                        break;
                    string n = Console::input_name();
                    schedule[0].cancel_resv(s, n);
                    break;
                }
                case 2: {
                    schedule[1].show_schedule();
                    int s = Console::input_seat_num();
                    if (s == 0)
                        break;
                    string n = Console::input_name();
                    schedule[1].cancel_resv(s, n);
                    break;
                }
                case 3: {
                    schedule[2].show_schedule();
                    int s = Console::input_seat_num();
                    if (s == 0)
                        break;
                    string n = Console::input_name();
                    schedule[2].cancel_resv(s, n);
                    break;
                }
                case 4:
                    cout << "�߸� �����ϼ̽��ϴ�. ó�� �޴��� ���ư��ϴ�." << endl;
                }
            }
        }
        else if (m == 3) {
            for (int i = 0; i < 3; i++) {
                schedule[i].show_schedule();
            }
        }
        else if (m == 4) {
            cout << "���� �ý����� �����մϴ�.";
            exit(0);
        }
        else {
            cout << "�߸� �Է��ϼ̽��ϴ�. �޴��� �ٽ� ������ �ּ���." << endl;
        }
        cout << endl;
    }
}

void Schedule::show_schedule() {
    cout << ts << "��:";
    for (int i = 0; i < 8; i++)
        cout << "\t" << st[i].show_name();
    cout << endl;
}

void Schedule::set_resv(int s, string n) {
    if (st[s - 1].show_name() != "---")
        cout << "�̹� ����� �ڸ��Դϴ�. ó�� �޴��� ���ư��ϴ�." << endl;
    else st[s - 1].set_name(n);
}

void Schedule::cancel_resv(int s, string n) {
    if (st[s - 1].show_name() == "---") {
        cout << "�̹� ����ִ� �ڸ��Դϴ�. ó�� �޴��� ���ư��ϴ�." << endl;
        return;
    }
    if (st[s - 1].show_name() != n) {
        cout << "����� �̸��� ��ġ���� �ʽ��ϴ�. ó�� �޴��� ���ư��ϴ�." << endl;
        return;
    }
    st[s - 1].reset_name();
}
