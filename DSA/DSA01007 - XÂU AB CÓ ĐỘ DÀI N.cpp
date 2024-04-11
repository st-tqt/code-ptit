#include <iostream>
using namespace std;

int n;

void Try(int i, string s){
	if (i == n) cout << s << " ";
		else {
			Try(i + 1, s + "A");
			Try(i + 1, s + "B");
		}
}

int main(){
	int t; cin >> t; 
	while (t--){
		cin >> n;
		Try(0, ""); cout << endl;
	}
}
