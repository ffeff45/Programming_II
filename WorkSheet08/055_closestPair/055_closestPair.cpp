#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>
#define CNT 100

struct point {
	int x;
	int y;
};

double distance(point a, point b);

int main() 
{
	point p[CNT];

	srand(time(0));
	for (int i = 0; i < CNT; i++)
	{
		p[i].x = rand() % 1000;
		p[i].y = rand() % 1000;
	}


	double min = 1000;
	int min_i;
	int min_j;
	for (int i = 0; i < CNT; i++)
	{
		for (int j = 0; j < CNT; j++)
		{
			if (i != j && min > distance(p[i], p[j])) {
				min_i = i;
				min_j = j;
				min = distance(p[i], p[j]);
			}
		}
	}

	printf("점 %d(%d, %d)와 점 %d(%d, %d)이 가장 가까운 점의 쌍입니다.\n거리 = %f\n",
		min_i, p[min_i].x, p[min_i].y, min_j, p[min_j].x, p[min_j].y, min);
}

double distance(point a, point b)
{
	return sqrt((b.x - a.x) * (b.x - a.x)
		+ (b.y - a.y) * (b.y - a.y));
}