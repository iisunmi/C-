#include <iostream>

using namespace std;

//1. strcmp, strncmp, 직접 문자 하나하나 비교해서 검사하는 함수제작
//문자열 2개 입력받고 문자열이 같은지 다른지 검사하는 프로그램 작성하세요.
//
//cin, cout 사용할 것


#define MAX 30

void compareStr(char* parr1, int len1, char* parr2, int len2)
{
	int i = 0, max = 0;
	int str1 = strlen(parr1);
	int str2 = strlen(parr2);
	(str1 > str2) ? max = str1 : max = str2;
	//cout << max << endl;
	for (i = 0; i < max; i++) {

		if ((*(parr1 + i) != *(parr2 + i))) {
			cout << "문자열이 다릅니다."; exit(0);
		}
	}
	cout << "문자열이 같습니다." << endl;
}

void main()
{
	char array1[MAX];
	char array2[MAX];

	cout << "문자열1을 입력하세요 : ";
	cin >> array1;
	cout << "문자열2을 입력하세요 : ";
	cin >> array2;
	//cout << strlen(array1) << endl;
	//cout << strlen(array2) << endl;
	compareStr(array1, sizeof(array1) / sizeof(array1[0]), array2, sizeof(array2) / sizeof(array2[0]));

}




//#define MAX 10
//
//void compareStr(char *array1, char *array2)
//{
//
//	for (int i = 0; i < MAX; i++) {
//
//		if (array1[i] != array2[i]) {
//			cout << "문자가 다릅니다." << endl; continue;
//		}
//		
//		else cout << "문자가 같습니다." << endl; 
//	}
//	
//	
//}
//
//int main()
//{
//	char array1[MAX] = { 0 };
//	char array2[MAX] = { 0 };
//
//	cout << "문자열1을 입력하세요 : ";
//	cin >> array1;
//	cout << "문자열2을 입력하세요 : ";
//	cin >> array2;
//
//	compareStr(array1, array2);
//}





//2. 사용자로부터 계속 정수를 입력받는다.
//- 1이 되면 출력한다.
//default로 5개를 동적할당하고
//5개를 넘어가면 + 5씩 동적할당을 증가시킨다.
//5 -> 10 -> 15
//반드시 new 연산자를 사용할 것


#define NUM_LEN 5

int main22() {


	int*pnum = new int[NUM_LEN];
	for (int i = 0; i < NUM_LEN; i++) {
		cout << "정수를 입력하세요 : " << endl;
		cin >> *pnum;

		//if (i == *pnum) {

		//	cout << "Memory's Full!!" << endl;
		//	cout << "Are you sure you want to realloc?" << endl;
		//	char ans = getchar();
		//	if (ans == 'Y' || ans == 'y') {
		//		*pnum += NUM_LEN;
		//		pnum = new int[NUM_LEN];
		//	}	
		//	
		//}


		if (*pnum == -1) {
			cout << "끝" << endl;
			break;
		}
	}
	cout << endl;
	delete[] pnum;

	return 0;
}







//
//3. TelInfo를 new delete를 사용하여 수정할 것
//
//4. 3번문제를 구조체에서 클래스로 전환할 것