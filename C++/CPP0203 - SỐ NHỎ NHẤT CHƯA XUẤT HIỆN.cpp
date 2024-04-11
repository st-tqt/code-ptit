#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
int main(){ 
    int t; cin >> t;
    while (t--){
        int n, d = 0; cin >> n;
        int a[n];
        set<int> s; s.insert(0);
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (a[i] > 0) s.insert(a[i]); 
        }
        vector<int> vt(s.begin(), s.end());
        for (int i = 1; i < vt.size(); i++){
            if (i != vt[i]){
                cout << i << endl;
                d = 1;
                break;
            }
        }
        if (d == 0) cout << vt.size() << endl;
    }
    return 0;
}