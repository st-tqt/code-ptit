#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, Mn = 10000, Mx = 0; cin >> n;
        set<int> s;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            if (Mn > x) Mn = x;
            if (Mx < x) Mx = x;
            s.insert(x);
        }
        cout << Mx - Mn - s.size() + 1 << endl;
    }
    return 0;
}