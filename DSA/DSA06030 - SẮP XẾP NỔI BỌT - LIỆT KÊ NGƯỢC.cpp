#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> a, b;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            a.push_back(x);
        }
        vector<vector<int> > s;
        for (int i = 0; i < n; i++){
            int d = 0;
            for (int j = 1; j < n - i; j++){
                if (a[j] < a[j - 1]) swap(a[j], a[j - 1]);
            }
            for (int j = 1; j < n; j++){
                if (a[j] < a[j - 1]){
                    d = 1;
                    break;
                }
            } 
            s.push_back(a);
            if (d == 0) break;
        }
        for (int i = s.size() - 1; i >= 0; i--){
            cout << "Buoc " << i + 1 << ": ";
            for (int j = 0; j < n; j++) cout << s[i][j] << " "; cout << endl;
        }
    }
    return 0;
}