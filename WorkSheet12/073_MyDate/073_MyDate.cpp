#include <iostream>
using namespace std;

class MyDate {
private:
    int y, m, d;

public:
    MyDate(int y,int m, int d) {
        this->y = y;
        this->m = m;
        this->d = d;
    }
    void Show() {
        cout << y << "년 " << m << "월 " << d << "일" << endl;
    }

};

int main() {
    MyDate chirstmas(2023, 12, 25);
    MyDate parentDay(2024, 5, 8);

    cout << "크리스마스 : ";
    chirstmas.Show();

    cout << "어버이날 : ";
    parentDay.Show();
}