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
            k = k*2 + (s[i] - '0');
            k %= 5; 
        }
        if (k == 0) cout << "Yes" << endl;
            else cout << "No" << endl;
    }
    return 0;
}