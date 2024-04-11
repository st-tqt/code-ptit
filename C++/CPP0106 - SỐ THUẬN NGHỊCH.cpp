#include <iostream>
using namespace std;

bool kt(string s){
	for (int i = 0; i < s.size() / 2; i++){
		if (s[i] != s[s.size() - i - 1]) return false;
	}
	return true;
}

int main(){
	int t; cin >> t;
	cin.ignore();
	while (t--){
		string s; cin >> s;
		if (kt(s)) cout << "YES" << endl;
			else cout << "NO" << endl;
	}
}