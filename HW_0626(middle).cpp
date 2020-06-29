#include <iostream>

using namespace std;



//1.swap(&a, &b) 시 a와 b의 값이 교환되도록 하는 swap함수를 포인터를 사용해서 작성하세요

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
//	cout << "swap함수 호출 전 : " << a <<", "<< b << endl;
//	cout  << endl;
//  swap(&a, &b);
//  cout << "swap함수 호출 후 : " << a << ", " << b << endl;
//}

//2.swap(a, b) 시 a와 b의 값이 교환되도록 하는 swap함수를 레퍼런스를 사용해서 작성하세요
//
int swap(int& a, int& b) {

	int temp = a;
	a = b;
	b = temp;

	return 0;
}

int main() {
	int a=10, b=20;

	cout << "swap함수 호출 전 : " << a <<", "<< b << endl;
  cout << endl;
	swap(a, b);
	cout << "swap함수 호출 후 : "<< a << ", "<< b << endl;


}



//3.swap(&a, &b, &c) 시 a = > b, b = > c, c = > a에 전달되도록 포인터를 사용해서 작성하세요

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
//	cout << "swap함수 호출 전 : " << a << ", " << b << ", " <<c<< endl;
//	swap(&a, &b, &c);
//	cout << "swap함수 호출 후 : " << a << ", " << b << ", " <<c<< endl;
//}


//4.swap(a, b, c) 시 a = > b, b = > c, c = > a에 전달되도록 레퍼런스를 사용해서 작성하세요

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
//	cout << "swap함수 호출 전 : " << a << ", " << b << ", " <<c<< endl;
//	swap(a, b, c);
//	cout << "swap함수 호출 후 : " << a << ", " << b << ", " <<c<< endl;
//}