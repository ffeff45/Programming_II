#include <iostream>
using namespace std;

float GetSH(int sm) {
    return sqrt(sm);
}

int main()
{
    int SH;
    try {
        cout << "면적 입력 : ";
        cin >> SH;
        if (SH < 0) {
            throw SH;
        }
        cout << GetSH(SH) << endl;
    }
    catch (int e) {
        cout << "면적은 음수가 될 수 없습니다." << endl;
    }
}