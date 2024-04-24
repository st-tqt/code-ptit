#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, d = 0; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 1; i < n; i++){
            for (int j = i - 1; j >= 0; j--){
                if (a[i] == a[j]){
                    d = 1;
                    cout << a[i] << endl;
                    break;
                }
            }
            if (d == 1) break;
        }
        if (d == 0) cout << -1 << endl;
    }
    return 0;
}