#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, k, d = 0; cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n, greater<int>());
        for (int i = 0; i < k; i++) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}