#include <iostream>
using namespace std;

int  main() {
	double demicals[5];
	cout << "���� 5���� �Է��ϼ��� : ";
	cin >> demicals[0] >> demicals[1] >> demicals[2] >> demicals[3] >> demicals[4];
	cout << "�迭�� ���� : " << demicals[0] << ", " << demicals[1] << ", " << demicals[2] << ", " << demicals[3] << ", " << demicals[4] << endl;


	double tot = demicals[0] + demicals[1] + demicals[2] + demicals[3] + demicals[4];
	double ave = tot / 5;

	cout << "�հ� : " << tot << endl;
	cout << "��� : " << ave << endl;

	return 0;
}