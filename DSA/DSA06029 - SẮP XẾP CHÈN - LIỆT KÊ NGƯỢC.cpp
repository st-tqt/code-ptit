#include <iostream>
#include <vector>
using namespace std;
int main(){
        int n; cin >> n;
        vector<int> a, b;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            a.push_back(x);
        }
        vector<vector<int> > s;
        for (int i = 0; i < n; i++){
            b.push_back(a[i]);
            int j = i - 1;
            while (j >= 0 && a[i] < b[j]){
                b[j + 1] = b[j];
                j--;
            }
            b[j + 1] = a[i];
            s.push_back(b);
        }
        for (int i = s.size() - 1; i >= 0; i--){
            cout << "Buoc " << i << ": ";
            for (int j = 0; j <= i; j++) cout << s[i][j] << " "; cout << endl;
        }
    return 0;
}