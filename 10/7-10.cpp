#include <iostream>
#include <string>
using namespace std;

class Statistic{
	int* arr;
	int count;
public:
	Statistic(){
		arr = new int[10];
		count = 0;
	}
	~Statistic() { delete[] arr; }

	bool operator ! () { return this->arr; }
	Statistic& operator ~(){
		for (int i = 0; i < count; i++) cout << arr[i] << ' ';
		cout << endl;
		return *this;
	}
	Statistic& operator << (int x){
		this->arr[count++] = x;
		return *this;
	}
	void operator >> (int& avg){
		int sum = 0;

		for (int i = 0; i < count; i++)
		{
			sum += arr[i];
		}
		avg = sum / count;
	}
};

int main() {
	Statistic stat;
	if (!stat) cout << "현재 통계 데이터가 없습니다." << endl;

	int x[5];
	cout << "5개의 정수를 입력하라 >> ";
	for (int i = 0; i < 5; i++)
		cin >> x[i];

	for (int i = 0; i < 5; i++)
		stat << x[i];

	stat << 100 << 200;
	~stat;

	int avg;
	stat >> avg;
	cout << "avg = " << avg << endl;
}