#include <iostream>
using namespace std;
int main(){
	int t; cin >> t;
	while (t--){
		bool ok = true;
		int n, k; cin >> n >> k;
		int a[n + 1];
		for (int i = 1; i <= k; i++) cin >> a[i];
		for (int i = k; i >= 1; i--){
			if (a[i] < n - k + i){
				a[i] += 1;
				for (int j = i + 1; j <= k; j++) a[j] = a[j - 1] + 1;
				ok = false; 
				break;
			}
		}
		if (ok){
			for (int i = 1; i <= k; i++) cout << i << " "; cout << endl;
		}
		else {
			for (int i = 1; i <= k; i++) cout << a[i] << " "; cout << endl;
		}
	}
}
