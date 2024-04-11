#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, d = 0; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n - 1; i++){
            int j;
            for (j = i + 1; j < n; j++){
                if (a[i] == a[j]){
                    d = 1;
                    cout << a[i] << endl;
                    break;
                }
            }
            if (a[i] == a[j]) break;
        }
        if (d == 0) cout << "NO" << endl;
    }
    return 0;
}