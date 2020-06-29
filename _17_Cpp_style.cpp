#include <iostream>

using namespace std;


struct Student {

	char name[20];
	int age;

	void inputStudent() {

		cout << "이름 입력 : ";
		cin >> name;
		cout << "나이 입력 : ";
		cin >> age;
	}

	void showStudent() {

		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}


};



void main() {

	Student st;
	st.inputStudent();

	//접근을 맘대로 할수 있다. 아래와 같이 바껴서 출력됨..
	strcpy(st.name, "너 바보!");
	st.name = -200;

	st.showStudent();
}