#include <iostream>
#include <map>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, m = 0, k; cin >> n;
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
            if (mp[a[i]] > m){
                m = mp[a[i]];
                k = a[i];
            }
        }
        if (m <= n/2) cout << "NO" << endl;
            else cout << k << endl;
    }
    return 0;
}