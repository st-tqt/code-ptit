#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        int pos = -1;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            if (x == k && pos == -1) pos = i + 1; 
        }
        cout << pos << endl;
    }
    return 0;
}