#include <iostream>
#include <cstdio>


//1. �ΰ��� ������ �Է¹ް� ��� �������� ����ϼ���

int main1() {

	int a, b;
	std::cout << "���� 2���� �Է��ϼ��� : " << std::endl;
	std::cin >> a >> b;
	std::cout << a << "/" <<b << "=" << a / b << std::endl;
	std::cout << a << "%" << b << "=" << a % b << std::endl;

	return 0;
}

//2. ������ ������ �Է¹ް� ������ ���� ������ ���ؼ� ��� ���ϼ���.
//��, num1�� ���� + num2�� ���� + num3�� ����

int main2() {

	int a, b, c;
	std::cout << "���� 3���� �Է��ϼ��� : " << std::endl;
	std::cin >> a >> b >> c;
	std::cout << a << "X" << a << "+" << b << "X" << b << "+" << c << "X" << c <<"="<<a*a+b*b+c*c<< std::endl;

	return 0;
}


//3. while���� �̿��ؼ� 1���� 100���� ����ϼ���

int main3() {
	int n=1;
	while (n <=100) {

		std::cout << n << std::endl;
		n++;
	}
	return 0;
}




//4. while���� �̿��ؼ� 10���� 20���� ����ϼ���
int main4() {
	int n = 10;
	while (n <= 20) {
		
		std::cout << n << std::endl;
		n++;
	}
	return 0;
}

//5. while���� �̿��ؼ� 1���� 10���� ���� ����ϼ���

int main5() {
	int n = 1;
	int sum = 0;

	while(n<=10){

		sum = sum + n;
		n = n + 1;
		
	}
	std::cout <<"1���� 10������ ���� ����ϼ��� : "<< sum << std::endl;
	
	return 0;
}


//6. while���� �̿��ؼ� 1���� 10���� �߿� ¦���� ����ϼ���
//while������ ���ǹ��� �־��ָ� ��
//¦�� ���� if num % 2 == 0:


int main6() {
	int n = 1;

	std::cout << "1���� 10���� �߿� ¦���� ����ϼ��� : " << std::endl;
	while (n <= 10) {

		if (n % 2 == 0) {
			std::cout << n << std::endl;
		}
		n++;
	}

	return 0;
}


//7. ���� ������ �Է¹ް� �� ����ŭ "�����մϴ�"�� ����ϼ���
int main() {
	int n;
		
	std::cout<< " ���� ������ �Է��ϼ��� : " << std::endl;
	std::cin >> n;
	
	for (int i = 1; i <= n;i++) {
		std::cout << "�����մϴ�" << std::endl;
	}

}