#include <iostream>
#include "_06_struct_01.h"
#include "_06_struct_02.h"

using namespace std;

void main() {

	Score::Student st = { "ȫ�浿",90,88,100 }; //�ʱ�ȭ
	std::cout << "�̸� : " << st.name << '\n';
	std::cout << "���� : " << st.kor << '\n';
	std::cout << "���� : " << st.math << '\n';
	std::cout << "���� : " << st.eng << endl;

	std::cout << std::endl<< std::endl;

	Personal::Student st1 = { "ȫ�浿","������",24,174.5,76.5 };
	std::cout << "�̸�  : " << st1.name << '\n';
	std::cout << "����  : " << st1.age << '\n';
	std::cout << "Ű    : " << st1.height << '\n';
	std::cout << "������ : " << st1.weight << '\n';
}
