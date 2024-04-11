#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n + 1] = {0};
        for (int i = 1; i <= n; i++){
            cin >> a[i];
            a[i] += a[i - 1];
        }
        int i = 1;
        while (i <= n && a[n] - a[i] != a[i - 1]) i++;
        if (a[n] - a[i] == a[i - 1]) cout << i << endl;
            else cout << -1 << endl;
    }
    return 0;
}