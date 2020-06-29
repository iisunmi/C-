/*C++에서는 구조체를 선언할 때
struct를 안 붙여도 된다.*/
#include <stdio.h>

struct _Point
{
	int x;
	int y;
};
typedef struct _Point Point;

void main()
{
	//struct _Point pt;
	Point pt;
	pt.x = 10;
	pt.y = 20;
	printf("[%d %d]\n", pt.x, pt.y);

	_Point _pt;
	_pt.x = 10;
	_pt.y = 20;
	printf("[%d %d]\n", _pt.x, _pt.y);
}