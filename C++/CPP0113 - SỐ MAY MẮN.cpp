#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    cin.ignore();
    while (t--){
        string s; cin >> s;
        if (s[s.size() - 2] == '8' && s[s.size() - 1] == '6') cout << "1" << endl;
            else cout << "0" << endl;
    }
    return 0;
}