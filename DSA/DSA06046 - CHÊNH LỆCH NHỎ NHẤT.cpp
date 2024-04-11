#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		long long a[n], m = 9999999;
		for (int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		for (int i = 1; i < n; i++){
			if (m > a[i] - a[i - 1]) m = a[i] - a[i - 1];
		}
		cout << m << endl;
	}
	return 0;
}
