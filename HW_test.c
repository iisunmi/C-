#include <stdio.h>


void main11() {

	int val;

	while (1) {
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d", &val);

		(val == -1) ? printf("val�� -1�̴�\n") :
			((val > -1) ? printf("val�� -1���� Ů�ϴ�\n") : printf("val�� -1���� �۽��ϴ�\n"));

		/*((char)(val > 32) || (char)(val < 47)) && ((char)(val > 58) || (char)(val < 127)) ?
		printf("Ư�����ڸ� �Է��ϼ̽��ϴ�. ������ �Է����ּ��� : ") : printf("�����ڸ� �Է��ϼ̽��ϴ�. ������ �Է����ּ��� : ");
		*/

		
		if(val==-1)
		break;

	}

}






void main22() {

	int score = 0;

	while (1) {
		printf("�����Է� : ");
		scanf_s("%d", &score);

		if (score >= 90)
			printf("A����\n");

		else if (score >= 80)
			printf("B����\n");

		else if (score >= 70)
			printf("C����\n");

		else if (score >= 60)
			printf("D����\n");

		else
			printf("F����\n");

		if (printf("A����\n"))
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
		printf("���� �Է�(-1�̸� ����) : ");
		scanf_s("%d", &num);
		if (num == -1) {
			printf("��\n");
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

		printf("%d��° ���� �Է� : ",i+1);
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
	printf("%d�� �������� �ִ밪�� %d, �ּҰ��� %d, ������ %d, ����� %d\n",i+1, max,min, sum, ave);
}







