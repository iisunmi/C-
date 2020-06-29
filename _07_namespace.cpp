#include <iostream>
#include "_07_struct_01.h"
#include "_07_struct_02.h"
#include "_07_namespace.h"

using namespace std;
using namespace A::Score;


void main() {

	//A::Score::Student st = { "홍길동",90,88,100 }; //성적 초기화
	Student st = { "홍길동",90,88,100 }; //성적 초기화
	std::cout << "이름 : " << st.name << '\n';
	std::cout << "국어 : " << st.kor << '\n';
	std::cout << "수학 : " << st.math << '\n';
	std::cout << "영어 : " << st.eng << endl;

	std::cout << std::endl << std::endl;

	B::Personal::Student st1 = { "홍길동","지리산",24,174.5,76.5 }; //신상정보 초기화
	std::cout << "이름  : " << st1.name << '\n';
	std::cout << "나이  : " << st1.age << '\n';
	std::cout << "키    : " << st1.height << '\n';
	std::cout << "몸무게 : " << st1.weight << '\n';


	std::cout << std::endl << std::endl;

	std::cout << A::name << std::endl;
	std::cout << B::name << std::endl;

	std::cout << std::endl << std::endl;

	std::cout << A::job << std::endl;
	std::cout << B::job << std::endl;
}



