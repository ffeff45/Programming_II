#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle(int r = 0) {
		radius = r;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

int main()
{
	Circle donut(5);
	Circle pie(10);
	Circle pizza(15);

	cout << "도넛 : " << donut.getArea() << endl;
	cout << "파이 : " << pie.getArea() << endl;
	cout << "피자 : " << pizza.getArea() << endl;
}