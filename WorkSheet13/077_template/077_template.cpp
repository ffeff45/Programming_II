#include <iostream>
#include <string>
using namespace std;

template <typename T>
void print(T a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << "\n";
	}
}

int main()
{
	int a[] = { 1,2,3,4,5,6 };
	double d[5] = { 1.1,2.2,3.3,4.4,5.5 };
	string s[5] = { "apple","tomato","kiwi","peach","orange" };
	print(a, 6);
	print(d, 5);
	print(s, 5);
}
