/*함수를 만드는 방법 2가지
1. 일반 함수
2. 매크로 함수*/

#include <iostream>

using namespace std;

/*2.매크로 함수
    전처리기에 의해 치환됨
	속도는 빠르지만, 에러발생이 쉽다
	복잡한 매크로함수 생성 시 종종 에러 발생 */
//#define MUL(x,y)  x*y
#define MUL(x,y)  ((x)*(y)) //치환이 되지않도록 괄호를 꼭 써준다!

/*1. 일반함수
    호출 시 함수주소로 이동했다가 돌아옴
	속도가 매크로함수보다 느리다 
	인자전달과 반환이 명확하여 디버깅이 쉽다*/
int mul(int a, int b) { //함수코드의 위치임. 

	return a  * b;
}

void main() {

	cout << mul(10, 20)<<endl;
	cout << MUL(10, 20)<<endl;
	cout  << endl;
	cout << mul(1+2, 1+2) << endl;
	cout << MUL(1 + 2, 1 + 2) << endl;
	//cout << 1 + 2*1 + 2<< endl;//매크로함수는 전처리기에 의해 연산이 이렇게 바뀐다~조심해랴

}