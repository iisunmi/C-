#include <iostream>

using namespace std;



void ShowInfo( const char* name, const char* phone, const char* nation="대한민국",int exPhoneNum=82) {

	cout << "국적 : " << nation << endl;
	cout << "이름 : " << name << endl;
	cout << "국번 : " << exPhoneNum << endl;
	cout << "전화 : " << phone << endl;
	cout << "---------------------------" << endl;

}

void main() {

	ShowInfo("홍길동", "010-1111-1111");
	ShowInfo("임꺽정", "010-1111-1111","율도국");
	ShowInfo("장길산", "010-1111-1111","만주",77);

}




//
//void ShowInfo(const char* nation, const char* name, int exPhoneNum,const char*phone) {
//
//	cout << "국적 : " << nation << endl;
//	cout << "이름 : " << name << endl;
//	cout << "국번 : " << exPhoneNum << endl;
//	cout << "전화 : " << phone << endl;
//
//	 
//}
//
//void main() {
//
//	ShowInfo("대한민국", "홍길동", 82, "010-1111-1111");
//
//}