#include <iostream>
#include <set>
using namespace std;
int main(){
	int t; cin >> t;
	while (t--){
		bool ok = true;
		int n, k; cin >> n >> k;
        set<int> d;
		int a[n + 1];
		for (int i = 1; i <= k; i++){
            cin >> a[i];
            d.insert(a[i]);
        }
		for (int i = k; i >= 1; i--){
			if (a[i] < n - k + i){
				a[i] += 1; d.insert(a[i]);
				for (int j = i + 1; j <= k; j++){
                    a[j] = a[j - 1] + 1;
                    d.insert(a[j]);
                }
				ok = false; 
				break;
			}
		}
		if (ok){
			cout << k << endl;
		}
		else {
			cout << d.size() - k << endl;
		}
	}
}