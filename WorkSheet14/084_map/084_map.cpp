#include <iostream>
#include <map>
using namespace std;


int main()
{
	map<string, string > f;
	f["강병익"] = "010-1111-2222";
	f["조용석"] = "010-2222-3333";
	f["김병수"] = "010-3333-2222";
	for (auto i : f)
		cout << i.first << " : " << i.second << endl;

	f.insert(pair<string, string>("강병익", "010-1111-2222"));
	f.insert(pair<string, string>("조용석", "010-2222-3333"));
	f.insert(pair<string, string>("김병수", "010-3333-2222"));

	map<string, string>::iterator itr;
	for (itr = f.begin(); itr != f.end(); itr++)
		cout << itr->first << " : " << itr->second << endl;
}