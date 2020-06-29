#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS


int main() {

	int sum = 0;
	int n=1;

	while (n <=10) {
		scanf_s("%d", &n);
		sum += n;
		
		printf("%d", n);
		n++;
	}

	

	return 0;
}