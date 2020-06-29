#include <iostream>
#include <string>

/*Ŭ������ ������ ��
�ܺο��� ������ ���� ���ƾ� �� ����(ȣ��� �ʿ䰡 ���� ����� ) private���� �����ش�

ĸ��ȭ

*/

using namespace std;

class Restaurant {

private:
    string cooks[6] = { "�Ұ�ⵤ��","ī������","������","����","������","Ƣ��" };
    int money;
    float meat;
    float rice;
    int selCookNum;

    void afterWork() {
        cleanRestaurant();
        cout << "���� �ݾ��� " << money << "�̴�" << endl;
    }

public:

    /*<������ �Ҹ��� �Լ��� Ư¡>
       ���ϰ��� ����.
       Ŭ������� �����ϴ�.*/

    //��ü ���� ������ �ڵ� ȣ��(�ʱ�ȭ �۾�) //��ü������ �����Լ��� ����������.
    Restaurant() {
        cout << "*** ������ �Լ� ȣ�� ***" << endl;
        prepareRestaurant(10000,2,2);
    }

    Restaurant(int _money, float _meat, float _rice) {
        cout << "*** �Ű����� ������ �Լ� ȣ�� ***" << endl;
        prepareRestaurant(_money, _meat, _rice);

    }

    //��ü ���� �Ҹ�� �ڵ� ȣ��(���� ó�� �۾�)
    ~Restaurant() {
        cout << "*** �Ҹ��� �Լ� ȣ�� ***" << endl;
        afterWork();
    }

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
        cout << "���� : " << money << endl;
        cout << "��� : " << meat << endl;
        cout << "�� : " << rice << endl;
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
        if (_pay > 0)
            money += _pay;
    }

    


};

void main() {

   // Restaurant rest; //������ �Լ� �ڵ� ȣ��
    Restaurant rest(99999, 3.0f, 4.0f);
    //rest.prepareRestaurant(100000, 2.5f, 3.4f);
    for (int i = 0; i < 3; i++) {

        rest.greetGuest();
        rest.showMenu();
        rest.getSelMenu();
        rest.dispatchCook();
        rest.calcFoodPrice(7000);
    }
    //rest.afterWork();
    //�Ҹ��� �Լ� �ڵ� ȣ��
}