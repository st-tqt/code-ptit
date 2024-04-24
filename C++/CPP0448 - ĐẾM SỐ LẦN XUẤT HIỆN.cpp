#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, k, d = 0; cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (a[i] == k) d++;
        }
        if (d == 0) cout << -1 << endl;
            else cout << d << endl;
    }
    return 0;
}