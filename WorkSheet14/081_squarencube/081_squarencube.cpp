#include <iostream>
using namespace std;

int square(int num) {
    return pow(num, 2);
}

int cube(int num) {
    return pow(num, 3);
}

int GetMax(int a[], int n, int (*func)(int)) {
    int max = 0;
    for (int i = 0; i < n; i++) {
        int sum = func(a[i]);
        if (max <= sum) {
            max = sum;
        }
    }
    return max;
}

int main()
{
    int a[6] = { 3,1,-4,5,9,-2 };

    cout << GetMax(a, 6, square) << endl;
    cout << GetMax(a, 6, cube) << endl;
}