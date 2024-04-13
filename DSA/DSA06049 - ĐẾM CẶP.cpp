#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        long long d = 0;
        for (int i = 0; i < n - 1; i++){
            int j = lower_bound(a + i + 1, a + n, a[i] + k) - a;
            if (j - 1 > i) d += (j - i - 1);
        }
        cout << d << endl;
    }
}