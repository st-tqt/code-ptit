#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            a.push_back(x);
        }
        vector<vector<int> > s;
        for (int i = 0; i < n - 1; i++){
            for (int j = i + 1; j < n; j++){
                if (a[i] > a[j]) swap(a[i], a[j]);
            }
            s.push_back(a);
        }
        for (int i = s.size() - 1; i >= 0; i--){
            cout << "Buoc " << i + 1 << ": ";
            for (int j = 0; j < n; j++) cout << s[i][j] << " "; cout << endl;
        }
    }
    return 0;
}