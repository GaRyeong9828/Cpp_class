#include <iostream>
using namespace std;

int main() {
	char coffee[100];
	int num, cost = 0, total = 0;

	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << endl;

	while (total < 20000) {
		cout << "�ֹ�>> ";
		cin >> coffee >> num;

		if (strcmp(coffee, "����������") == 0) {
			cost = 2000 * num;
			cout << cost << "���Դϴ�. ���ְ� �弼��" << endl;
		}
		else if (strcmp(coffee, "�Ƹ޸�ī��") == 0) {
			cost = 2300 * num;
			cout << cost << "���Դϴ�. ���ְ� �弼��" << endl;
		}
		else if (strcmp(coffee, "īǪġ��") == 0) {
			cost = 2500 * num;
			cout << cost << "���Դϴ�. ���ְ� �弼��" << endl;
		}
		else {
			cout << "�ٽ� �ֹ��ϼ���!!" << endl;
		}
		total += cost;
	}
	cout << "���� " << total << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~" << endl;

	return 0;
}