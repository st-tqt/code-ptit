#include <iostream>
#include <string>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s = "H";
        for (int i = 0; i < n - 1; i++) s += "A";
        cout << s << endl;
        bool kt = true;
        while (kt){
            int d = 0;
            while (d < n - 1){
                if (s[d] != 'H') break;
                d += 2;
            }
            if (s[d - 2] == 'H' && d >= n - 1){
                kt = false;
                break;
            }
            for (int i = n - 2; i > 1; i--){
                if (s[i] == 'A' && s[i - 1] != 'H'){
                    s[i] = 'H';
                    for (int j = i + 1; j < n - 1; j++) s[j] = 'A';
                    cout << s << endl;
                    break;
                }
            }
        }
    }
}