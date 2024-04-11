#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int m, n; cin >> m >> n;
        int a[m], b[n];
        for (int i = 0; i < m; i++) cin >> a[i];
        sort(a, a + m);
        for (int i = 0; i < n; i++) cin >> b[i];
        sort(b, b + n);
        int i = 0, j = 0;
        while (i < m && j < n){
            while (a[i] <= b[j] && i < m) cout << a[i++] << " ";
            while (b[j] <= a[i] && j < n) cout << b[j++] << " ";
        }
        while (i < m) cout << a[i++] << " ";
        while (j < n) cout << b[j++] << " ";
        cout << endl; 
    }
    return 0;
}