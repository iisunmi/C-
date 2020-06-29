#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS

//1. 2개의 값을 서로 교환하는 swap함수를 만드세요
//int num0 = 10, num1 = 20;
//swap(&num0, &num1);을 호출하면==주소를 전달
//num0은 20을 num1은 10을 담고 있으면 됩니다.

int swap1(int*num0, int*num1) {
	
	int temp;

	temp = *num0;
	*num0 = *num1;
	*num1 = temp;

}



//2. 3개의 값을 서로 교환하는 swap함수를 만드세요
//int num0 = 10, num1 = 20, num2 = 30;
//swap(&num0, &num1, &num2);
//을 호출하면 num0은 30을 num1은 10, num2는 20을 담고 있으면 됩니다.

int swap2(int *num0, int *num1, int *num2) {

	int temp;
	temp = *num1;
	*num1 = *num0;
	*num0 = *num2;
	*num2 = temp;



}




//3. 10개의 실수를 배열로 전달해서 평균을 구하는 함수를 만드세요
double Array(double *arr) {

	
	double avg = 0;
	double sum = 0;

	printf("10개의 실수를 입력하세요 >> ");
	for (int i = 0; i < 10; i++) {
		scanf_s("%lf",&arr[i]);
		sum += arr[i];
		
	}
	avg = sum / 10;
	printf("10개의 실수를 배열로 전달받아 평균을 구하세요 >> %lf", avg);

	return avg;
}
//4. char* name = "korea";
//int len = strlen(name);
//을 하면 len에는 5가 담겨 있습니다.
//strlen함수는 문자열의 끝에 '\0'을 찾아서 그 전까지 개수를 세는 방식으로
//구현되어 있습니다
//직접 int str_len(char* ptr); 함수를 구현하세요





int main() {

	int num0 = 10, num1 = 20, num2 = 30;
	double arr[10] = { 0 };


	printf("swap함수를 호출 전 : %d,%d\n", num0, num1);
	swap1(&num0, &num1);
	printf("swap함수를 호출 후 : %d,%d\n", num0, num1);
	



	printf("swap 함수 호출 전 : %d, %d, %d\n", num0, num1, num2);
	swap2(&num0, &num1, &num2);
	printf("swap 함수 호출 후 : %d, %d, %d\n", num0, num1, num2);
	

	Array(arr);

}