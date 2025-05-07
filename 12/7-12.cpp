#include <iostream>
using namespace std;

class SortedArray {
    int size;
    int* p;
    void sort();
public:
    SortedArray() {
        size = 0;
        p = NULL;
    }
    SortedArray(SortedArray& src) {
        this->size = src.size;
        this->p = new int[this->size];
        for (int i = 0; i < this->size; i++)
            this->p[i] = src.p[i];
    }
    SortedArray(int p[], int size) {
        this->p = new int[size];
        this->size = size;
        for (int i = 0; i < size; i++)
            this->p[i] = p[i];
    }
    ~SortedArray() { delete[] p; }

    SortedArray operator+ (SortedArray& op);
    SortedArray& operator= (const SortedArray& op);

    void show() {
        sort();
        cout << "배열 출력 : ";
        for (int i = 0; i < size; i++)
            cout << p[i] << ' ';
        cout << endl;
    }
};
SortedArray SortedArray::operator+(SortedArray& op) {
    SortedArray tmp;
    tmp.size = this->size + op.size;
    tmp.p = new int[tmp.size];
    for (int i = 0; i < tmp.size; i++) {
        if (i < this->size)
            tmp.p[i] = this->p[i];
        else
            tmp.p[i] = op.p[i - (tmp.size - op.size)];
    }
    return tmp;
}
SortedArray& SortedArray::operator= (const SortedArray& op) {
    delete[] p;
    this->size = op.size;
    this->p = new int[this->size];
    for (int i = 0; i < this->size; i++)
        this->p[i] = op.p[i];
    return *this;
}
void SortedArray::sort() {
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (p[j] < p[i])
            {
                int tmp = p[i];
                p[i] = p[j];
                p[j] = tmp;
            }
        }
    }
}

int main() {
    int n[] = { 2, 20, 6 };
    int m[] = { 10, 7, 8, 30 };
    SortedArray a(n, 3), b(m, 4), c;

    c = a + b;

    a.show();
    b.show();
    c.show();
}