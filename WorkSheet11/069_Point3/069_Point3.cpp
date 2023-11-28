#include <iostream>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
	int GetX() { return x; }
	int GetY() { return y; }

	static double distance(Point a, Point b) {
		return sqrt((a.x - b.x) * (a.x - b.x)
			+ (a.y - b.y) * (a.y - b.y));
	}

};

int main()
{
	Point p3;
	Point p4(10, 20);

	cout << "p3와 p4의 거리는 "
		<< Point::distance(p3, p4) << endl;

	cout << "p3( " << p3.GetX() << ", "
		<< p3.GetY() << ")\n";
	cout << "p4( " << p4.GetX() << ", "
		<< p4.GetY() << ")\n";
}