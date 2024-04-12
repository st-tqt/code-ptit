#include <iostream>
#include <set>
using namespace std;
int main(){
	int t; cin >> t;
	set<string> st;
	cin.ignore();
	while (t--){
		string s; getline(cin, s);
		st.insert(s);
	}
	cout << st.size() << endl;
	return 0;
}
