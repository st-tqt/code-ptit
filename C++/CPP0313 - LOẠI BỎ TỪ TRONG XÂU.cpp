#include <iostream>
#include <string>
using namespace std;
int main(){
	string s, p;
	getline(cin, s); cin >> p;
	int pos = s.find(p);
	s.erase(pos, p.size() + 1);
	cout << s << endl;
	return 0;
}
