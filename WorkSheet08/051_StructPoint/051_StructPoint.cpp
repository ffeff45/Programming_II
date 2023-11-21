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

double distance(point a, point b);


int main()
{
	point a, b;

	printf("한 점의 x,y 좌표를 입력 : ");
	scanf_s("%d %d", &a.x, &a.y);
	printf("(%d, %d)\n", a.x, a.y);

	printf("또 한 점의 x,y 좌표를 입력 : ");
	scanf_s("%d %d", &b.x, &b.y);
	printf("(%d, %d)\n", b.x, b.y);

	printf("두 점 사이의 거리 : %f\n", distance(a, b));
}

double distance(point a, point b)
{
	return sqrt((b.x - a.x) * (b.x - a.x)
		+ (b.y - a.y) * (b.y - a.y));
}