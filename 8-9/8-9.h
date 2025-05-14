#pragma once
#include <iostream>
using namespace std;

class Console {
public:
    static int select_menu();
    static int select_time();
    static int input_seat_num();
    static string input_name();
};

class Seat {
    string name;
public:
    Seat() { name = { "---" }; }
    void set_name(string name) { this->name = name; }
    void reset_name() { name = { "---" }; }
    string show_name() { return name; }

};

class Schedule {
    Seat* seat;
    string scname;
    int seat_num;
    string person_name;
public:
    Schedule() { seat = new Seat[8]; }
    ~Schedule() { delete[] seat; }
    void set_scname(string scname) { this->scname = scname; }
    void show_schedule();
    void set_resv(int seat_num, string person_name);
    void cancel_resv(int seat_num, string person_name);
};


class AirlineBook {
    Schedule* schedule;
    int menu;
    int time;
public:
    AirlineBook() {
        schedule = new Schedule[3];
        schedule[0].set_scname("07");
        schedule[1].set_scname("12");
        schedule[2].set_scname("17");
    }
    ~AirlineBook() { delete[] schedule; }
    void start();
};