#include <iostream>
using namespace std;

bool kt(string s){
	for (int i = 0; i < s.size(); i++){
		if (s[i] != '0' && s[i] != '6' && s[i] != '8') return false;
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