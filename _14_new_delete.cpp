#include <iostream>

/*<�����Ҵ�>
c: malloc,calloc,realloc,free�Լ� ���
c++ : new delete �����ڷ� �����Ϸ��� �����Ŵ (���� ���ϱ� �Լ��� �������� �� �����ڷ� ����������!)
     -���󵵼��� �����Կ� ���� �ӵ������ ���� �Լ�->������
     -�� ���ϰ� ����
*/

using namespace std;

void main() {

    //4byte int1�� �����Ҵ�
    int* num = (int*)malloc(sizeof(int)); //(int*)malloc(sizeof(int))�� �Լ���
    *num = 10;
    cout << *num << endl;
    free(num);

    int* num1 = new int; //malloc()
    //int* num1 = new int(); //calloc()
    *num1 = 20;
    cout << *num1 << endl;
    delete num1;

}