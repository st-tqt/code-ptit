#include <iostream>
#include <map>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        map<long long, int> mp;
        for (int i = 0; i < n; i++){
            long long x; cin >> x;
            mp[x]++;
        }
        for (int i = 0; i < n; i++){
            if (mp[i] >= 1) cout << i << " ";
                else cout << "-1 ";
        }
        cout << endl;
    }
    return 0;
}