#include <iostream>

using namespace std;

//1. strcmp, strncmp, ���� ���� �ϳ��ϳ� ���ؼ� �˻��ϴ� �Լ�����
//���ڿ� 2�� �Է¹ް� ���ڿ��� ������ �ٸ��� �˻��ϴ� ���α׷� �ۼ��ϼ���.
//
//cin, cout ����� ��


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
			cout << "���ڿ��� �ٸ��ϴ�."; exit(0);
		}
	}
	cout << "���ڿ��� �����ϴ�." << endl;
}

void main()
{
	char array1[MAX];
	char array2[MAX];

	cout << "���ڿ�1�� �Է��ϼ��� : ";
	cin >> array1;
	cout << "���ڿ�2�� �Է��ϼ��� : ";
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
//			cout << "���ڰ� �ٸ��ϴ�." << endl; continue;
//		}
//		
//		else cout << "���ڰ� �����ϴ�." << endl; 
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
//	cout << "���ڿ�1�� �Է��ϼ��� : ";
//	cin >> array1;
//	cout << "���ڿ�2�� �Է��ϼ��� : ";
//	cin >> array2;
//
//	compareStr(array1, array2);
//}





//2. ����ڷκ��� ��� ������ �Է¹޴´�.
//- 1�� �Ǹ� ����Ѵ�.
//default�� 5���� �����Ҵ��ϰ�
//5���� �Ѿ�� + 5�� �����Ҵ��� ������Ų��.
//5 -> 10 -> 15
//�ݵ�� new �����ڸ� ����� ��


#define NUM_LEN 5

int main22() {


	int*pnum = new int[NUM_LEN];
	for (int i = 0; i < NUM_LEN; i++) {
		cout << "������ �Է��ϼ��� : " << endl;
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
			cout << "��" << endl;
			break;
		}
	}
	cout << endl;
	delete[] pnum;

	return 0;
}







//
//3. TelInfo�� new delete�� ����Ͽ� ������ ��
//
//4. 3�������� ����ü���� Ŭ������ ��ȯ�� ��