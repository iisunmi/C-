#include <iostream>

using namespace std;

void swap(int a, int b) {

	int temp = a;
	a = b;
	b = temp;
}

void swapPtr(int* pa, int* pb) {

	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

/*���۷��� (����) ,�ּҰ� �ƴ� �� �� ���� ��ü�� ���ϴ°���
  1) �������� low���������� ����
  2) ������(������ ������ ���� �ý����� �ٸ� �κ��� ������ �� �ִµ� �̷� ���� ���α׷����� ������ ������ ������ �� �ִ�
     -> �׷��� �������� �ش� �������� ������ ����ϴ� ������� �ٲ� ��*/
void swapRef(int& ra, int& rb) {

	int temp = ra;
	ra = rb;
	rb = temp;
}

void main() {

	int num0 = 10, num1 = 20;
	cout << "num0 : " << num0 << endl;
	cout << "num1 : " << num1 << endl;
	//swap(num0, num1);//main�� ������� �������... swap�Լ��ȿ����� ������ ����ǰ� ������ �� ������ ������� �ȴ�. //���� �����ϰ� ��
	//swapPtr(&num0, &num1); //swapPtr������ �ӹ��°� �ƴ϶� main�� �ִ� ������ �����ϰ� �ȴ�.
	swapRef(num0, num1); //���� �����Ѱ�ó�� ����...������ ����ߴµ�-->�׷��� �� ������ ���� ��
	cout << "num0 : " << num0 << endl;
	cout << "num1 : " << num1 << endl;


}