#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main(){
	int t; cin >> t;
	while (t--){
		int n, d = 0; cin >> n;
		long long a[n], m = 0;
		set<long long> s;
		for (int i = 0; i < n; i++){
			cin >> a[i];
			a[i] *= a[i];
			s.insert(a[i]);
			if (m < a[i]) m = a[i];
		}
		sort(a, a + n);
		for (int i = 0; i < n - 1; i++){
			for (int j = i + 1; j < n; j++){
				if (a[i] + a[j] > m) break;
				if (s.find(a[i] + a[j]) != s.end()){
					d = 1;
					cout << "YES" << endl;
					break;
				} 
			}
			if (d == 1) break;
		}
		if (d == 0) cout << "NO" << endl;
	}
	return 0;
}
