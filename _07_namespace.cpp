#include <iostream>
#include "_07_struct_01.h"
#include "_07_struct_02.h"
#include "_07_namespace.h"

using namespace std;
using namespace A::Score;


void main() {

	//A::Score::Student st = { "ȫ�浿",90,88,100 }; //���� �ʱ�ȭ
	Student st = { "ȫ�浿",90,88,100 }; //���� �ʱ�ȭ
	std::cout << "�̸� : " << st.name << '\n';
	std::cout << "���� : " << st.kor << '\n';
	std::cout << "���� : " << st.math << '\n';
	std::cout << "���� : " << st.eng << endl;

	std::cout << std::endl << std::endl;

	B::Personal::Student st1 = { "ȫ�浿","������",24,174.5,76.5 }; //�Ż����� �ʱ�ȭ
	std::cout << "�̸�  : " << st1.name << '\n';
	std::cout << "����  : " << st1.age << '\n';
	std::cout << "Ű    : " << st1.height << '\n';
	std::cout << "������ : " << st1.weight << '\n';


	std::cout << std::endl << std::endl;

	std::cout << A::name << std::endl;
	std::cout << B::name << std::endl;

	std::cout << std::endl << std::endl;

	std::cout << A::job << std::endl;
	std::cout << B::job << std::endl;
}



