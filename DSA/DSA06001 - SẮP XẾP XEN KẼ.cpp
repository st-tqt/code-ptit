#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		int b[n];
		int l = 0, r = n - 1;
		for (int i = 0; i < n; i++){
			if (i % 2 == 0) b[i] = a[r--];
				else b[i] = a[l++];
		cout << b[i] << " ";
		} cout << endl;
	}
}
