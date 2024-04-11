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
            if (a[i] == k) d = 1;
        }
        cout << d << endl;
    }
    return 0;
}