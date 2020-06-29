#include <iostream>

/*<함수오버로딩> - 매개변수는 다르고, 함수의 이름이 같은 문법
   c언어는 불가능 - 함수를 call할 때, 함수의 이름만 찾기 때문.
   c++언어는 가능 - 함수이름 포함 매개변수까지 고려해서 함수를 선택하여 call함
                    즉, 같은 이름의 함수를 여러 개 만들 수 있음*/

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