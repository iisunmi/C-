#include <iostream>

using namespace std;

class Student {

private:
	char name[20];
	int age;

public:
	void inputStudent() {

		cout << "�̸� �Է� : ";
		cin >> name;
		cout << "���� �Է� : ";
		cin >> age;
	}

	void showStudent() {

		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}


};



void main() {

	Student st;
	st.inputStudent();

	//private���� ���Ƴ��� ���ٺҰ����ϴ� �����
	//strcpy(st.name, "�� �ٺ�!");
	//st.name = -200;

	st.showStudent();
}