#include <iostream>

using namespace std;

void main() {

	int num;
	cout << "숫자 입력(1이면 3개 반복): ";
	cin >> num;

	int cnt = 0;
	bool isRun = num == 1;
	cout << "bool의 크기:" << sizeof(bool);
	while (isRun==true) {//while(num=1)->버그의 원인이 될 수 있다.
		cout << cnt << endl;
		cnt++;
		if (cnt == 3)
			break;
	}
}