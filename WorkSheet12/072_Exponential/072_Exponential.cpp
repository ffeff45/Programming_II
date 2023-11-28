#include <iostream>
#include <math.h>
using namespace std;

class Exponential {
private:
    int base, exp;

public:
    Exponential(int b = 1, int e = 1) {
        this -> base = b;
        this -> exp = e;
    }
    int getValue() { return (int)pow(base,exp); }
    int getBase()  { return this->base; }
    int getExp()   { return this->exp; }
    bool equals(Exponential b) {
        //if (base == b.base && exp == b.exp)
        //    return true;
        //else
        //    return false;

        if (pow(base, exp) == pow(b.base, b.exp))
            return true;
        else 
            return false;
    }
};

int main() {
    Exponential a(4, 2);
    Exponential b(16);
    Exponential c;

    cout << a.getValue() << " " << b.getValue() << " " << c.getValue() << endl;
    cout << "a의 베이스 : " << a.getBase() << ", 지수 :" << a.getExp() << endl;

    if (a.equals(b))
        cout << "같다" << endl;
    else
        cout << "다르다" << endl;
}