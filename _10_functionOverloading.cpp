#include <iostream>

/*<�Լ������ε�> - �Ű������� �ٸ���, �Լ��� �̸��� ���� ����
   c���� �Ұ��� - �Լ��� call�� ��, �Լ��� �̸��� ã�� ����.
   c++���� ���� - �Լ��̸� ���� �Ű��������� ����ؼ� �Լ��� �����Ͽ� call��
                    ��, ���� �̸��� �Լ��� ���� �� ���� �� ����*/

using namespace std;

int add(int a, int b) {

	return a + b;
}

double add(double a, double b) {

	return a + b;
}

void main() {
	cout << add(10, 20) << endl;
	cout << add(3.14, 5.2) << endl;

}