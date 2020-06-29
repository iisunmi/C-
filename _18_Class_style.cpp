#include <iostream>

using namespace std;

class Student {

private:
	char name[20];
	int age;

public:
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

	//private으로 막아놔서 접근불가능하니 지운다
	//strcpy(st.name, "너 바보!");
	//st.name = -200;

	st.showStudent();
}