#include <iostream>

using namespace std;



void ShowInfo( const char* name, const char* phone, const char* nation="���ѹα�",int exPhoneNum=82) {

	cout << "���� : " << nation << endl;
	cout << "�̸� : " << name << endl;
	cout << "���� : " << exPhoneNum << endl;
	cout << "��ȭ : " << phone << endl;
	cout << "---------------------------" << endl;

}

void main() {

	ShowInfo("ȫ�浿", "010-1111-1111");
	ShowInfo("�Ӳ���", "010-1111-1111","������");
	ShowInfo("����", "010-1111-1111","����",77);

}




//
//void ShowInfo(const char* nation, const char* name, int exPhoneNum,const char*phone) {
//
//	cout << "���� : " << nation << endl;
//	cout << "�̸� : " << name << endl;
//	cout << "���� : " << exPhoneNum << endl;
//	cout << "��ȭ : " << phone << endl;
//
//	 
//}
//
//void main() {
//
//	ShowInfo("���ѹα�", "ȫ�浿", 82, "010-1111-1111");
//
//}