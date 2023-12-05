#include <iostream>
using namespace std;


template <typename T>
T Sum(const T arr[], int n) {
    T sum = arr[0];
    for (int i = 1; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int a[5] = { 3,1,5,1,4 };
    double b[5] = { 2.3,4.5,6.5,7.6,3.8 };
    string c[3] = { "Hello","World","Doodle" };

    cout << Sum(a, 5) << endl;
    cout << Sum(b, 5) << endl;
    cout << Sum(c, 3) << endl;
}