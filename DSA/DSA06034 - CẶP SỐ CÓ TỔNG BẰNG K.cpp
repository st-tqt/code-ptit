#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        long long n, k; cin >> n >> k;
        vector<long long> a;
        for (int i = 0; i < n; i++){
            long long x; cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        long long d = 0;
        for (int i = 0; i < n - 1; i++){
            d += upper_bound(a.begin() + i + 1, a.end(), k - a[i]) - lower_bound(a.begin() + i + 1, a.end(), k - a[i]);
        } 
        cout << d << endl;
    }
    return 0;
}