#include <iostream>

using namespace std;

//1. 1 ~100���� ���� ����� ����ϼ���.
//cout�� ����ϼ���.
int main1() {

	
	int sum=0;
	for (int i = 1; i <= 100; i++) {

		sum += i;
	}
	cout << "1���� 100������ ���� " << sum << " �Դϴ�. " << endl;
	
	return 0;
}


//2. 1 ~100���� ���ٿ� 10���� ����ϼ���.
//������ ������ ������ �� ��

//int main() {
//
//	int n=1;
//	
//	for (int i = 1; i <= 10; i++) {
//		
//		
//		for (int j = 1; j <= 10; j++) {
//			cout << n << endl;
//			n++;
//				
//		}
//		cout << endl;
//		
//	}
//	
//}



//3. c�� c++�� cout, cin�� ����Ͽ� �ٲټ���


int main() { // ������ �־��� �ڵ�
	int k, n = 0;
	int sum = 0;
	cout << "�� ���� �Է��ϼ��� >> " << endl;
	cin >> n;
	for (k = 1; k <= n; k++) {
		sum += k;
	}
	cout << "1���� " << n << "������ ���� " << sum << "�Դϴ�." << endl;
	
	return 0;
}