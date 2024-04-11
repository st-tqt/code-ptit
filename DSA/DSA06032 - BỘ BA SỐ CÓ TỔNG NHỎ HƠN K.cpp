#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        long long a[n], d = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        for (int i = 0; i < n - 2; i++){
            for (int j = i + 1; j < n - 1; j++){
                long long x = k - a[i] - a[j]; 
                d += lower_bound(a + j + 1, a + n, x) - (a + j + 1);
            }
        }
        cout << d << endl;
    }
    return 0;
}