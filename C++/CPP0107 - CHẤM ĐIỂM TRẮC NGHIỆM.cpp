#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int t; cin >> t;
	char a[15] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
	char b[15] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
	while (t--){
		int n; cin >> n; 
		char c[15];
		for (int i = 0; i < 15; i++) cin >> c[i];
		float d = 0;
		if (n == 101){
			for (int i = 0; i < 15; i++){
				if (a[i] == c[i]) d += (float) 10/15;
			}
		}
		else {
			for (int i = 0; i < 15; i++){
				if (b[i] == c[i]) d += (float) 10/15;
			}
		}
		cout << setprecision(2) << fixed << d << endl;
	}
}