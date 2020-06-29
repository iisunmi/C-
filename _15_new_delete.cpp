//배열

#include <iostream>

#define NUM_LEN 10 //10개짜리 배열만들었다

using namespace std;

void main() {

	//1)
	//int배열 10개를 동적할당 후 2의 배수 저장
	int* pnum = (int*)malloc(sizeof(int) * NUM_LEN);
	for (int i = 0; i < NUM_LEN; i++) {
		pnum[i] = i * 2;
		cout << pnum[i] << " ";
	}
	cout << endl;
	free(pnum);


	//2)
	pnum = new int[NUM_LEN]; //malloc 
	//pnum = new int[NUM_LEN](); //calloc
	for (int i = 0; i < NUM_LEN; i++) {
		pnum[i] = i * 2;
		cout << pnum[i] << " ";
	}
	cout << endl;
	delete[] pnum; //동적할당 해제

}