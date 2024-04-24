#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, k, d = -1; cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (a[i] == k) d = i;
        }
        cout << d + 1 << endl;
    }
    return 0;
}