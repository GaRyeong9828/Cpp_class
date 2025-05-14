#include<iostream>
using namespace std;

#include"8-9.h"

int Console::select_menu() {
    cout << "예약:1, 취소:2, 보기:3, 끝내기:4>> ";
    int m;
    cin >> m;
    return m;
}

int Console::select_time() {
    cout << "07시:1, 12시:2, 17시:3>> ";
    int t;
    cin >> t;
    return t;
}

int Console::input_seat_num() {
    cout << "좌석 번호>> ";
    int s;
    cin >> s;
    if (s < 1 || 8 < s) {
        cout << "없는 좌석 번호 입니다. 처음 메뉴로 돌아갑니다." << endl;
        return 0;
    }
    return s;
}

string Console::input_name() {
    cout << "이름 입력>> ";
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
                    cout << "잘못 선택하셨습니다. 처음 메뉴로 돌아갑니다." << endl;
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
                    cout << "잘못 선택하셨습니다. 처음 메뉴로 돌아갑니다." << endl;
                }
            }
        }
        else if (m == 3) {
            for (int i = 0; i < 3; i++) {
                schedule[i].show_schedule();
            }
        }
        else if (m == 4) {
            cout << "예약 시스템을 종료합니다.";
            exit(0);
        }
        else {
            cout << "잘못 입력하셨습니다. 메뉴를 다시 선택해 주세요." << endl;
        }
        cout << endl;
    }
}

void Schedule::show_schedule() {
    cout << ts << "시:";
    for (int i = 0; i < 8; i++)
        cout << "\t" << st[i].show_name();
    cout << endl;
}

void Schedule::set_resv(int s, string n) {
    if (st[s - 1].show_name() != "---")
        cout << "이미 예약된 자리입니다. 처음 메뉴로 돌아갑니다." << endl;
    else st[s - 1].set_name(n);
}

void Schedule::cancel_resv(int s, string n) {
    if (st[s - 1].show_name() == "---") {
        cout << "이미 비어있는 자리입니다. 처음 메뉴로 돌아갑니다." << endl;
        return;
    }
    if (st[s - 1].show_name() != n) {
        cout << "예약된 이름과 일치하지 않습니다. 처음 메뉴로 돌아갑니다." << endl;
        return;
    }
    st[s - 1].reset_name();
}
