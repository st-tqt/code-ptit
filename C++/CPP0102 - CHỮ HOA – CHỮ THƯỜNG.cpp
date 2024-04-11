#include <iostream>
using namespace std;
int main(){
	int t; cin >> t;
	while (t--){
		char c; cin >> c;
		if (65 <= c && 90 >= c) c += 32;
			else c -= 32;
		cout << c << endl;
	}
}