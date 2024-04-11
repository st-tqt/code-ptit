#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        pair<int, int> a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a, a + n);
        int d = -1, k = a[0].first, h = a[0].second;
        for (int i = 1; i < n; i++){
            if (a[i].first > k) d = max(d, a[i].second - h);
            if (h > a[i].second){
                k = a[i].first;
                h = a[i].second;
            }
        }
        cout << d << endl;
    }
    return 0;
}