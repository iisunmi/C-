#include <iostream>

using namespace std;

//1. 1 ~100까지 더한 결과를 출력하세요.
//cout을 사용하세요.
int main1() {

	
	int sum=0;
	for (int i = 1; i <= 100; i++) {

		sum += i;
	}
	cout << "1부터 100까지의 합은 " << sum << " 입니다. " << endl;
	
	return 0;
}


//2. 1 ~100까지 한줄에 10개씩 출력하세요.
//정수는 탭으로 간격을 줄 것

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



//3. c를 c++의 cout, cin을 사용하여 바꾸세요


int main() { // 문제에 주어진 코드
	int k, n = 0;
	int sum = 0;
	cout << "끝 수를 입력하세요 >> " << endl;
	cin >> n;
	for (k = 1; k <= n; k++) {
		sum += k;
	}
	cout << "1에서 " << n << "까지의 합은 " << sum << "입니다." << endl;
	
	return 0;
}