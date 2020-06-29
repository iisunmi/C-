#include <iostream>
#include <string>

/*<Ŭ���� ������ ����� ���ٱ��� ���� ����>
1) ���� : private
   �Լ� : public
   
2) �Լ� �߿��� �ܺο� ������ �Լ��� ���ο����� ���Ǵ� �Լ��� �ִ�.
    �ܺγ����Լ� : public
    ���� �����Լ� : private*/



/*<class>
1) c���
  a) �������� : �Լ��� ������� ����
  b) ������ ���α׷� : main()�� �������� ��� �б�
  c) �Լ��� ��� : �Ű�����(input), return(output)
                  �ܺο��� ��������
  d) �Լ� == ��������
  7) �������� ������ �ʿ��� �̰��� �ٷ� ����ü!!

2) c++
  a) ����ü+ �Լ�==>Ŭ����
  b) ��+����=> �繰/���/��/�ý���
  c) ���ٱ���
     private  ���θ� ���ٰ���(ex.����)
     public : �ܺε� ���ٰ���(ex. ��,ǥ��,����)
     protected : �ڽ��� public, �ܺδ� private (ex.���)
  
  */

using namespace std;

class Restaurant {

private:
    string cooks[6] = {"�Ұ�ⵤ��","ī������","������","����","������","Ƣ��"};
    int money;
    float meat;
    float rice;
    int selCookNum;

private:

    void cleanRestaurant() {
        cout << "�Ĵ��� û���Ѵ�" << endl;
    }

    void cookRice() {
        cout << "���� ���´�" << endl;
    }

    void cookSoup() {
        cout << "���� ���δ�" << endl;
    }

public:
    

    void prepareRestaurant(int _money, float _meat, float _rice) {

        cleanRestaurant();
        money = _money;
        meat = _meat;
        rice = _rice;
        cout << "���� : " <<money <<endl;
        cout << "��� : " << meat<<endl;
        cout << "�� : " << rice<<endl;
        cout << "�̻� ��Ḧ �غ��ߴ�" << endl;
        cookRice();
        cookSoup();
    }

    

    void greetGuest() {
        cout << "�������" << endl;
    }

    void showMenu() {

        for (int i = 0; i < sizeof(cooks) / sizeof(cooks[i]); i++)
            cout << i << ". " << cooks[i] << endl;
    }

    void getSelMenu() {
        cout << "�޴� ��ȣ�� �����ϼ��� >> ";
        cin >> selCookNum;
    }

    void dispatchCook() {
        cout << cooks[selCookNum] << "�丮 ���Խ��ϴ�" << endl;
    }

    void calcFoodPrice(int _pay) {
        if(_pay>0)
        money += _pay;
    }

    void afterWork() {
        cleanRestaurant();
        cout << "���� �ݾ��� " << money << "�̴�" << endl;
    }


};

void main() {

    //�Ĵ� Ŭ���� ���� => ��ü(object)
    //�ν��Ͻ�ȭ ���״�~ ���赵�� ��üȭ���״�~
    //�޸𸮿� �÷ȴ�~(������ �Լ���)
    Restaurant rest;
    rest.prepareRestaurant(100000, 2.5f, 3.4f);
    for (int i = 0; i < 3; i++) {

        rest.greetGuest();
        rest.showMenu();
        rest.getSelMenu();
        rest.dispatchCook();
        rest.calcFoodPrice(7000);
    }
    rest.afterWork();

}