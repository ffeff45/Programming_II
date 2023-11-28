#include <iostream>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	// 매개변수 없는 생성자
	Point() {
		x = 0;	// this->x 와 같다
		y = 0;
	}
	// 매개변수가 있는 생성자
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void SetX(int x) {
		if (x >= 0)
			this->x = x;
		// this는 자기 자신을 가리키는 포인터
		// 교과서 298쪽
	}
	int GetX() {
		return x;  // this->x 라고 써도 된다
	}
	void SetY(int y) {
		if (y >= 0)
			this->y = y;
		// this는 자기 자신을 가리키는 포인터
		// 교과서 298쪽
	}
	int GetY() {
		return y;  // this->y 라고 써도 된다
	}
};

int main()
{
	Point p1, p2;

	// 캡슐화를 위해
	// Setter와 Getter를 사용한다
	p1.SetX(10);
	p1.SetY(10);

	p2.SetX(20);
	p2.SetY(20);

	cout << "p1(" << p1.GetX() << ", " << p1.GetY() << ")" << endl;
	cout << "p2(" << p2.GetX() << ", " << p2.GetY() << ")" << endl;

	Point p3;	// 매개변수 없는 생성자 실행
	Point p4(10, 20); // 매개변수 있는 생성자
	cout << "p3(" << p3.GetX() << ", " << p3.GetY() << ")" << endl;
	cout << "p4(" << p4.GetX() << ", " << p4.GetY() << ")" << endl;

}