#include <iostream>
#include <cstdio>


//1. 두개의 정수를 입력받고 몫과 나머지를 출력하세요

int main1() {

	int a, b;
	std::cout << "정수 2개를 입력하세요 : " << std::endl;
	std::cin >> a >> b;
	std::cout << a << "/" <<b << "=" << a / b << std::endl;
	std::cout << a << "%" << b << "=" << a % b << std::endl;

	return 0;
}

//2. 세개의 정수를 입력받고 각각의 수의 제곱을 구해서 모두 더하세요.
//즉, num1의 제곱 + num2의 제곱 + num3의 제곱

int main2() {

	int a, b, c;
	std::cout << "정수 3개를 입력하세요 : " << std::endl;
	std::cin >> a >> b >> c;
	std::cout << a << "X" << a << "+" << b << "X" << b << "+" << c << "X" << c <<"="<<a*a+b*b+c*c<< std::endl;

	return 0;
}


//3. while문을 이용해서 1부터 100까지 출력하세요

int main3() {
	int n=1;
	while (n <=100) {

		std::cout << n << std::endl;
		n++;
	}
	return 0;
}




//4. while문을 이용해서 10부터 20까지 출력하세요
int main4() {
	int n = 10;
	while (n <= 20) {
		
		std::cout << n << std::endl;
		n++;
	}
	return 0;
}

//5. while문을 이용해서 1부터 10까지 합을 출력하세요

int main5() {
	int n = 1;
	int sum = 0;

	while(n<=10){

		sum = sum + n;
		n = n + 1;
		
	}
	std::cout <<"1부터 10까지의 합을 출력하세요 : "<< sum << std::endl;
	
	return 0;
}


//6. while문을 이용해서 1부터 10까지 중에 짝수만 출력하세요
//while문내에 조건문을 넣어주면 됨
//짝수 조건 if num % 2 == 0:


int main6() {
	int n = 1;

	std::cout << "1부터 10까지 중에 짝수만 출력하세요 : " << std::endl;
	while (n <= 10) {

		if (n % 2 == 0) {
			std::cout << n << std::endl;
		}
		n++;
	}

	return 0;
}


//7. 양의 정수를 입력받고 그 수만큼 "감사합니다"를 출력하세요
int main() {
	int n;
		
	std::cout<< " 양의 정수를 입력하세요 : " << std::endl;
	std::cin >> n;
	
	for (int i = 1; i <= n;i++) {
		std::cout << "감사합니다" << std::endl;
	}

}