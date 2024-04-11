#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n + 2] = {0}, b[n + 2] = {0}, c[n + 2] = {0};
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++){
            if (a[i] > a[i - 1]) b[i] = b[i - 1] + 1;
                else b[i] = 1;
        }
        for (int i = n; i >= 1; i--){
            if (a[i] > a[i + 1]) c[i] = c[i + 1] + 1;
                else c[i] = 1;
        }
        int d = 0;
        for (int i = 1; i <= n; i++){
            d = max(d, b[i] + c[i] - 1);
        }
        cout << d << endl;
    }
    return 0;
}