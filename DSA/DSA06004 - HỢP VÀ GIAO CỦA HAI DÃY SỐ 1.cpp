#include <iostream>
#include <map>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        int a[n], b[m];
        map<int, int> mp;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        for (int i = 0; i < m; i++){
            cin >> b[i];
            mp[b[i]]++;
        }
        for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++) cout << it->first << " "; cout << endl;
        for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++){
            if (it->second == 2) cout << it->first << " ";
        }
        cout << endl;
    }
    return 0;
}