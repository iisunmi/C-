#include <iostream>

using namespace std;



//1.swap(&a, &b) �� a�� b�� ���� ��ȯ�ǵ��� �ϴ� swap�Լ��� �����͸� ����ؼ� �ۼ��ϼ���

//int swap(int* a, int* b) {
//
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//
//
//	return 0;
//}
//
//int main() {
//	int a=10, b=20;
//
//	cout << "swap�Լ� ȣ�� �� : " << a <<", "<< b << endl;
//	cout  << endl;
//  swap(&a, &b);
//  cout << "swap�Լ� ȣ�� �� : " << a << ", " << b << endl;
//}

//2.swap(a, b) �� a�� b�� ���� ��ȯ�ǵ��� �ϴ� swap�Լ��� ���۷����� ����ؼ� �ۼ��ϼ���
//
int swap(int& a, int& b) {

	int temp = a;
	a = b;
	b = temp;

	return 0;
}

int main() {
	int a=10, b=20;

	cout << "swap�Լ� ȣ�� �� : " << a <<", "<< b << endl;
  cout << endl;
	swap(a, b);
	cout << "swap�Լ� ȣ�� �� : "<< a << ", "<< b << endl;


}



//3.swap(&a, &b, &c) �� a = > b, b = > c, c = > a�� ���޵ǵ��� �����͸� ����ؼ� �ۼ��ϼ���

//int swap(int* a, int* b, int* c) {
//
//	int temp = *c;
//	*c = *b;
//	*b = *a;
//	*a = temp;
//
//	return 0;
//}
//
//int main() {
//
//	int a=10, b=20, c=30;
//
//	cout << "swap�Լ� ȣ�� �� : " << a << ", " << b << ", " <<c<< endl;
//	swap(&a, &b, &c);
//	cout << "swap�Լ� ȣ�� �� : " << a << ", " << b << ", " <<c<< endl;
//}


//4.swap(a, b, c) �� a = > b, b = > c, c = > a�� ���޵ǵ��� ���۷����� ����ؼ� �ۼ��ϼ���

//int swap(int& a, int& b, int& c) {
//
//	int temp = c;
//	c = b;
//	b = a;
//	a = temp;
//
//	return 0;
//}
//
//int main() {
//
//	int a=10, b=20, c=30;
//
//	cout << "swap�Լ� ȣ�� �� : " << a << ", " << b << ", " <<c<< endl;
//	swap(a, b, c);
//	cout << "swap�Լ� ȣ�� �� : " << a << ", " << b << ", " <<c<< endl;
//}