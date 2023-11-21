#include <stdio.h>
#include <math.h>


struct point
{
	int x;
	int y;
};

struct rectangle
{
	point p1, p2;
};


double area(rectangle r)
{
	return abs(r.p2.x - r.p1.x) * abs(r.p2.y - r.p1.y);
}


int main()
{
	point a, b;

	printf("한 점의 x,y 좌표를 입력 : ");
	scanf_s("%d %d", &a.x, &a.y);
	printf("(%d, %d)\n", a.x, a.y);

	printf("또 한 점의 x,y 좌표를 입력 : ");
	scanf_s("%d %d", &b.x, &b.y);
	printf("(%d, %d)\n", b.x, b.y);

	rectangle r;

	r.p1 = a;
	r.p2 = b;

	printf("사각형의 넓이 : %1.3f", area(r));
}
