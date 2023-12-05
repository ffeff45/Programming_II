#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> v;

int main()
{
	string n;

	for (int i = 0; i < 10; i++) {
		cin >> n;
		v.push_back(n);
	}
	sort(v.begin(), v.end());
	for (auto i : v) {
		cout << i << " ";
	}
}
