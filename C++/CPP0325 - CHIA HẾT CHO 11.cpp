#include <iostream>
#include <string>
using namespace std;
int main(){
    int t; cin >> t;
    cin.ignore();
    while (t--){
        string s; cin >> s;
        int k = 0;
        for (int i = 0; i < s.size(); i++){
            k = k*10 + (s[i] - '0');
            k %= 11; 
        }
        if (k == 0) cout << 1 << endl;
            else cout << 0 << endl;
    }
    return 0;
}