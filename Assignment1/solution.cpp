#include <iostream>
using namespace std;

int  main() {
	double demicals[5];
	cout << "숫자 5개를 입력하세요 : ";
	cin >> demicals[0] >> demicals[1] >> demicals[2] >> demicals[3] >> demicals[4];
	cout << "배열된 숫자 : " << demicals[0] << ", " << demicals[1] << ", " << demicals[2] << ", " << demicals[3] << ", " << demicals[4] << endl;


	double tot = demicals[0] + demicals[1] + demicals[2] + demicals[3] + demicals[4];
	double ave = tot / 5;

	cout << "합계 : " << tot << endl;
	cout << "평균 : " << ave << endl;

	return 0;
}