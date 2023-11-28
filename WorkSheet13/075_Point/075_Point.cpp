#include <iostream>
using namespace std;

class Point {
private:
	int x, y;
public:
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
	void print() {
		cout << "(" << x << ", " << y << ")"<< endl;
	}
	void set(int x, int y) {
		this->x = x;
		this->y = y;
	}
};

int main()
{
	Point a(10, 20);
	Point b;

	b.set(30, 30);
	a.print();
	b.print();
}