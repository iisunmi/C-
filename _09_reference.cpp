#include <iostream>

using namespace std;

void swap(int a, int b) {

	int temp = a;
	a = b;
	b = temp;
}

void swapPtr(int* pa, int* pb) {

	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

/*레퍼런스 (별명) ,주소가 아님 걍 그 변수 자체를 말하는거임
  1) 포인터의 low레벨느낌을 제거
  2) 포인터(포인터 연산을 통해 시스템의 다른 부분을 접근할 수 있는데 이런 것이 프로그래밍의 잠재적 위험을 가져올 수 있다
     -> 그래서 제한적인 해당 변수만의 접근을 허용하는 방식으로 바꾼 것*/
void swapRef(int& ra, int& rb) {

	int temp = ra;
	ra = rb;
	rb = temp;
}

void main() {

	int num0 = 10, num1 = 20;
	cout << "num0 : " << num0 << endl;
	cout << "num1 : " << num1 << endl;
	//swap(num0, num1);//main의 변수들과 상관없이... swap함수안에서만 템프가 적용되고 나오면 그 계산식은 사라지게 된다. //값만 전달하게 됨
	//swapPtr(&num0, &num1); //swapPtr에서만 머무는게 아니라 main에 있는 변수에 접근하게 된다.
	swapRef(num0, num1); //값만 전달한것처럼 보임...실제론 계산했는디-->그래서 걍 위에꺼 많이 씀
	cout << "num0 : " << num0 << endl;
	cout << "num1 : " << num1 << endl;


}