#include <iostream>
#include <map>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, d = 0; cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            mp[x]++;
        }
        for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++){
            if (it->second >= 2) d += it->second;
        }
        cout << d << endl;
    }
    return 0;
}