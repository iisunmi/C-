#include <iostream>
/**/


using namespace std;

void main() {

	cout << "주소 입력 : ";
	char address[100];
	cin.getline(address, sizeof(address), '+');  //cin이라는 객체변수임. ''값 앞까지 출력하라.
	cout << address << endl;

}