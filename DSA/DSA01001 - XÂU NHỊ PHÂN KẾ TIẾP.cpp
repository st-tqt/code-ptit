#include <iostream>
using namespace std;
int main(){
	int t; cin >> t;
	cin.ignore();
	while (t--){
		bool ok = true;
		string s;
		cin >> s;
		for (int i = s.size() - 1; i >= 0; i--){
			if (s[i] == '0'){
				s[i] = '1';
				for (int j = i + 1; j < s.size(); j++) s[j] = '0';
				ok = false;
				break;
			}
		}
		if (ok){
			for (int i = 0; i <s.size(); i++) cout << "0"; cout << endl;
		}
		else cout << s << endl;
	}
}
