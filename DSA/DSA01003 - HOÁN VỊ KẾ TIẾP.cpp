#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int t; cin >> t;
	while (t--){
		bool ok = true;
		int n; cin >> n;
		int a[n + 1];
		for (int i = 1; i <= n; i++) cin >> a[i];
		for (int i = n; i >= 2; i--){
			if (a[i] > a[i - 1]){
				ok = false;
				break;
			}
		}
		if (ok == false){
			int d = 0;
			for (int i = n; i >= 2; i--){
				for (int j = i - 1; j >= 1; j--){
					if (a[i] > a[j]){
						swap(a[i], a[j]);
						sort(a + j + 1, a + n + 1);
						d = 1;
						break;
					}
				}
				if (d == 1) break;		
			}
		}
		if (ok){
			for (int i = 1; i <= n; i++) cout << i << " "; cout << endl;
		}
		else {
			for (int i = 1; i <= n; i++) cout << a[i] << " "; cout << endl;
		}
	}
}
