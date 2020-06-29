#include <stdio.h>


void main11() {

	int val;

	while (1) {
		printf("정수를 입력하세요 : ");
		scanf_s("%d", &val);

		(val == -1) ? printf("val은 -1이다\n") :
			((val > -1) ? printf("val은 -1보다 큽니다\n") : printf("val은 -1보다 작습니다\n"));

		/*((char)(val > 32) || (char)(val < 47)) && ((char)(val > 58) || (char)(val < 127)) ?
		printf("특수문자를 입력하셨습니다. 정수를 입력해주세요 : ") : printf("영문자를 입력하셨습니다. 정수를 입력해주세요 : ");
		*/

		
		if(val==-1)
		break;

	}

}






void main22() {

	int score = 0;

	while (1) {
		printf("학점입력 : ");
		scanf_s("%d", &score);

		if (score >= 90)
			printf("A학점\n");

		else if (score >= 80)
			printf("B학점\n");

		else if (score >= 70)
			printf("C학점\n");

		else if (score >= 60)
			printf("D학점\n");

		else
			printf("F학점\n");

		if (printf("A학점\n"))
			break;
	}
}


void main33() {


	char ch;
	while (1) {

		ch = getchar();

		if (ch == '.')
			break;
		if (ch >= '0' && ch <= '9')
			continue;
		if (ch >= 'a' && ch <= 'z')
			ch += 'A' - 'a';

		putchar(ch);
	}
}


void main44() {

	int num;
	
	while (1) {
		printf("정수 입력(-1이면 종료) : ");
		scanf_s("%d", &num);
		if (num == -1) {
			printf("끝\n");
			break;
		}
	}
}


void main55() {

	int arr[5] = { 0 };
	int sum = 0;
	int ave,i;
	int max = arr[0];
	int min = 24700000;


	

	for (i = 0; i < 5; i++) {

		printf("%d번째 정수 입력 : ",i+1);
		scanf_s("%d", &arr[i]);
	}

	for (i = 0; i < 5; i++) {

		if (max < arr[i]) {
			max = arr[i];
		}

		if (min > arr[i]) {
			min = arr[i];
		}
	}

	for (i = 0; i < 5; i++) {

		sum += arr[i];
	}

	ave = sum / 5;
	printf("%d개 정수들의 최대값은 %d, 최소값은 %d, 총합은 %d, 평균은 %d\n",i+1, max,min, sum, ave);
}







