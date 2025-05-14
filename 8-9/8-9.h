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
    string n;
public:
    Seat() { n = { "---" }; }
    void set_name(string n) { this->n = n; }
    void reset_name() { n = { "---" }; }
    string show_name() { return n; }
};

class Schedule {
    Seat* st;
    string ts;
    int s;
    string n;
public:
    Schedule() { st = new Seat[8]; }
    ~Schedule() { delete[] st; }
    void set_scname(string ts) { this->ts = ts; }
    void show_schedule();
    void set_resv(int s, string n);
    void cancel_resv(int s, string n);
};

class AirlineBook {
    Schedule* schedule;
    int m;
    int t;
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
