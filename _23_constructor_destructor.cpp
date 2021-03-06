#include <iostream>
#include <string>

/*클래스를 설계할 때
외부에서 관심을 갖지 말아야 할 것은(호출될 필요가 없는 멤버는 ) private으로 감춰준다

캡슐화

*/

using namespace std;

class Restaurant {

private:
    string cooks[6] = { "소고기덮밥","카레덮밥","떡볶이","순대","오뎅탕","튀김" };
    int money;
    float meat;
    float rice;
    int selCookNum;

    void afterWork() {
        cleanRestaurant();
        cout << "오늘 금액은 " << money << "이다" << endl;
    }

public:

    /*<생성자 소멸자 함수의 특징>
       리턴값이 없다.
       클래스명과 동일하다.*/

    //객체 변수 생성시 자동 호출(초기화 작업) //객체변수는 메인함수의 지역변수임.
    Restaurant() {
        cout << "*** 생성자 함수 호출 ***" << endl;
        prepareRestaurant(10000,2,2);
    }

    Restaurant(int _money, float _meat, float _rice) {
        cout << "*** 매개변수 생성자 함수 호출 ***" << endl;
        prepareRestaurant(_money, _meat, _rice);

    }

    //객체 변수 소멸시 자동 호출(사후 처리 작업)
    ~Restaurant() {
        cout << "*** 소멸자 함수 호출 ***" << endl;
        afterWork();
    }

private:

    void cleanRestaurant() {
        cout << "식당을 청소한다" << endl;
    }

    void cookRice() {
        cout << "밥을 짓는다" << endl;
    }

    void cookSoup() {
        cout << "국을 끓인다" << endl;
    }

public:


    void prepareRestaurant(int _money, float _meat, float _rice) {

        cleanRestaurant();
        money = _money;
        meat = _meat;
        rice = _rice;
        cout << "현금 : " << money << endl;
        cout << "고기 : " << meat << endl;
        cout << "쌀 : " << rice << endl;
        cout << "이상 재료를 준비했다" << endl;
        cookRice();
        cookSoup();
    }



    void greetGuest() {
        cout << "어서오세요" << endl;
    }

    void showMenu() {

        for (int i = 0; i < sizeof(cooks) / sizeof(cooks[i]); i++)
            cout << i << ". " << cooks[i] << endl;
    }

    void getSelMenu() {
        cout << "메뉴 번호를 선택하세요 >> ";
        cin >> selCookNum;
    }

    void dispatchCook() {
        cout << cooks[selCookNum] << "요리 나왔습니다" << endl;
    }

    void calcFoodPrice(int _pay) {
        if (_pay > 0)
            money += _pay;
    }

    


};

void main() {

   // Restaurant rest; //생성자 함수 자동 호출
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
    //소멸자 함수 자동 호출
}