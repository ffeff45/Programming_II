#include <iostream>
using namespace std;

template<typename T>
class Vector2 {
private:
    T x, y;
public:
    Vector2(const T x, const T y) {
        this->x = x;
        this->y = y;
    }

    T GetX() { return x; }
    T GetY() { return y; }
};

int main()
{
    Vector2<int> v1(1, 3);
    Vector2<double> v2(1.5, 3.5);

    cout << v1.GetX() << ", " << v1.GetY() << endl;
    cout << v2.GetX() << ", " << v2.GetY() << endl;
}

