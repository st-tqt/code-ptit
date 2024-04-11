#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        int a[n + 1]; a[0] = 0;
        for (int i = 1; i <= n; i++){
            cin >> a[i];
            a[i] += a[i - 1];
        }
        for (int i = 0; i < k; i++){
            int l, r; cin >> l >> r;
            cout << a[r] - a[l - 1] << endl;
        }
    }
    return 0;
}