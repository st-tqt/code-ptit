#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, d = 0; cin >> n;
        int a[n];
        int m1 = 10000000, m2 = 10000000;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (i > 0 && a[i] != a[i - 1]) d = 1;
            if (m1 > a[i]){
                m2 = m1;
                m1 = a[i];
            }
            if (m1 < a[i] && m2 > a[i]) m2 = a[i];
        }
        if (d == 0) cout << -1 << endl;
            else cout << m1 << " " << m2 << endl;
    }
    return 0;
}