#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS

//1. 2���� ���� ���� ��ȯ�ϴ� swap�Լ��� ���弼��
//int num0 = 10, num1 = 20;
//swap(&num0, &num1);�� ȣ���ϸ�==�ּҸ� ����
//num0�� 20�� num1�� 10�� ��� ������ �˴ϴ�.

int swap1(int*num0, int*num1) {
	
	int temp;

	temp = *num0;
	*num0 = *num1;
	*num1 = temp;

}



//2. 3���� ���� ���� ��ȯ�ϴ� swap�Լ��� ���弼��
//int num0 = 10, num1 = 20, num2 = 30;
//swap(&num0, &num1, &num2);
//�� ȣ���ϸ� num0�� 30�� num1�� 10, num2�� 20�� ��� ������ �˴ϴ�.

int swap2(int *num0, int *num1, int *num2) {

	int temp;
	temp = *num1;
	*num1 = *num0;
	*num0 = *num2;
	*num2 = temp;



}




//3. 10���� �Ǽ��� �迭�� �����ؼ� ����� ���ϴ� �Լ��� ���弼��
double Array(double *arr) {

	
	double avg = 0;
	double sum = 0;

	printf("10���� �Ǽ��� �Է��ϼ��� >> ");
	for (int i = 0; i < 10; i++) {
		scanf_s("%lf",&arr[i]);
		sum += arr[i];
		
	}
	avg = sum / 10;
	printf("10���� �Ǽ��� �迭�� ���޹޾� ����� ���ϼ��� >> %lf", avg);

	return avg;
}
//4. char* name = "korea";
//int len = strlen(name);
//�� �ϸ� len���� 5�� ��� �ֽ��ϴ�.
//strlen�Լ��� ���ڿ��� ���� '\0'�� ã�Ƽ� �� ������ ������ ���� �������
//�����Ǿ� �ֽ��ϴ�
//���� int str_len(char* ptr); �Լ��� �����ϼ���





int main() {

	int num0 = 10, num1 = 20, num2 = 30;
	double arr[10] = { 0 };


	printf("swap�Լ��� ȣ�� �� : %d,%d\n", num0, num1);
	swap1(&num0, &num1);
	printf("swap�Լ��� ȣ�� �� : %d,%d\n", num0, num1);
	



	printf("swap �Լ� ȣ�� �� : %d, %d, %d\n", num0, num1, num2);
	swap2(&num0, &num1, &num2);
	printf("swap �Լ� ȣ�� �� : %d, %d, %d\n", num0, num1, num2);
	

	Array(arr);

}