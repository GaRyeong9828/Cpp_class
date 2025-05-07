#include <iostream>
#include <string>
using namespace std;

class Stack{
    int arr[100];
    int i;
public:
    Stack() { i = 0; }
    Stack& operator<< (int x) {
        arr[i] = x;
        i++;
        return *this;
    }
    Stack operator>> (int& x) {
        x = arr[i - 1];
        i--;
        return *this;
    }
    bool operator! () {
        if (i)
            return false;
        return true;
    }
};

int main(){
    Stack stack;
    stack << 3 << 5 << 10;
    while (true){
        if (!stack)
            break;
        int x;
        stack >> x;
        cout << x << ' ';
    }
    cout << endl;
}