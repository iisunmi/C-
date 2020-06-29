#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define NAME_LEN		20
#define TEL_LEN			20
#define MAX_PERSON_NUM	100

/*c++에서 struct와 class는 99%같다
 차이점은 struct는 기본적으로 모든 것이 public 접근 권한이고,
 class는 기본적으로 모든 것이 private 접근 권한이다.
 이러한 이유는 
 1) c++에서도 c 코드를 실행하기 위해서, 즉, 코드 호환성을 위해.
    c언어에서 구조체의 멤버는 그냥 접근한다(public)
 2) class의 기본권한이 private인 이유는 전역변수를 여기저기의 함수에서 마구 접근하면서 예상치 못한 bug 발생을 경험했기때문이다. 
    그래서 정식절차를 밟은 대상만 접근을 허용하도록 하는 장치를 제작*/

class Person
{
	//멤버변수는 직접 접근을 막는 것을 원칙으로 함
private: //안 써도 private으로 체크됨.
	char name[NAME_LEN];
	char phone[TEL_LEN];

	//대신 멤버변수는 멤버함수를 통해 접근하도록 함
public:
	//getter
	char* getName() {
		return name;
	}
	//setter
	void setName(char* _name) {
		strncpy(name, _name, strlen(_name));
		name[strlen(_name)] = '\n'; //==0 or NULL

	}
	char* getphone() {
		return phone;
	}

	void setPhone(char* _phone) {

		strncpy(phone, _phone, strlen(_phone));
		name[strlen(_phone)] = '\n'; //==0 or NULL
	}

	void showPerson() {

		printf("name : %s\n", name);
		printf("phone : %s\n", phone);
	}
};

/*c++에서는 이런 함수를 '전역함수'라고 부른다*/
void ShowMenu();
void InsertTelInfo(Person* par, int* pnum);
void DeleteTelInfo(Person* par, int* pnum);
void SearchTelInfo(Person* par, int num);
void PrintAll(Person* par, int num);
void ClearScreen();

void main()
{
	int choice = 0;						// 메뉴선택
	int nPersonNum = 0;

	Person* perArr = NULL;
	int perNum = 0;						// 저장된 인원수

	printf("저장할 인원수는 몇명입니까? : ");
	scanf("%d", &nPersonNum);
	perArr = new Person[nPersonNum];


	while (1)
	{
		ShowMenu();
		printf("Choose the item : ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			InsertTelInfo(perArr, &perNum);
			break;
		case 2:
			DeleteTelInfo(perArr, &perNum);
			break;
		case 3:
			SearchTelInfo(perArr, perNum);
			break;
		case 4:
			PrintAll(perArr, perNum);
			break;
		case 5:
		
			delete[] perArr;
			return;
			break;
		default:
			printf("illegal selection.. \n");
			break;
		}
	}
}

void ShowMenu()
{
	ClearScreen();
	printf("\n------------- Menu -------------\n");
	printf("	1. Insert \n");
	printf("	2. Delete \n");
	printf("	3. Search \n");
	printf("	4. Print All \n");
	printf("	5. Exit \n");
}

void InsertTelInfo(Person* par, int* pnum)
{
	char name[NAME_LEN];
	char phone[TEL_LEN];
	printf("[ INSERT ] \n");
	printf("Input Name : ");
	scanf("%s", name);
	printf("Input Tel Number : ");
	scanf("%s", phone);

	par[*pnum].setName(name);
	par[*pnum].setPhone(phone);
	//strcpy(par[*pnum].name, name);
	//strcpy(par[*pnum].phone, phone);
	(*pnum)++;

	printf("-----------> Data Inserted......\n");
}

void DeleteTelInfo(Person* par, int* pnum)
{
	int i = 0, j = 0;
	char name[NAME_LEN];

	printf("[ Delete ] \n");
	printf("Input Name for Removing : ");
	scanf("%s", name);

	for (i = 0; i < *pnum; i++)
	{
		if (strcmp(par[i].getName(), name) == 0)
		{
			for (j = i + 1; j < *pnum; j++)
			{
				strcpy(par[j - 1].getName(), par[j].getName());
				strcpy(par[j - 1].getphone(), par[j].getphone());
			}
			(*pnum)--;
			return;
		}
	}

	printf("-------------> Data Not Found..........\n");
}

void SearchTelInfo(Person* par, int num)
{
	int i = 0;
	char name[NAME_LEN];

	printf("[ Search ] \n");
	printf("Input Name for Searching : ");
	scanf("%s", name);

	for (i = 0; i < num; i++)
	{
		if (strcmp(par[i].getName(), name) == 0)
		{
			par[i].showPerson();
			return;
		}
	}

	printf("-------------> Data Not Found..........\n");
}

void PrintAll(Person* par, int num)
{
	int i = 0;

	printf("[ Print All Data ] \n");

	for (i = 0; i < num; i++)
		par[i].showPerson();

	getchar();
	getchar();
}

void ClearScreen() {

	//console의 dos명령 시 실행
	system("cls");
}