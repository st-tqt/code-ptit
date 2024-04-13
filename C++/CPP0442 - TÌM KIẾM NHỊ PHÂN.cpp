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
        bool kt = binary_search(a, a + n, k);
        if (kt) cout << 1 << endl;
            else cout << -1 << endl; 
    }
    return 0;
}