#include <iostream>

/*<동적할당>
c: malloc,calloc,realloc,free함수 사용
c++ : new delete 연산자로 컴파일러에 내장시킴 (자주 쓰니깐 함수로 하지말고 걍 연산자로 만들어버리자!)
     -사용빈도수가 증가함에 따라 속도향상을 위해 함수->연산자
     -더 편리하게 만듦
*/

using namespace std;

void main() {

    //4byte int1개 동적할당
    int* num = (int*)malloc(sizeof(int)); //(int*)malloc(sizeof(int))는 함수다
    *num = 10;
    cout << *num << endl;
    free(num);

    int* num1 = new int; //malloc()
    //int* num1 = new int(); //calloc()
    *num1 = 20;
    cout << *num1 << endl;
    delete num1;

}