#include <iostream>
using namespace std;

bool kt(string s){
    for (int i = 1; i < s.size() - 1; i++){
        if ((s[i] - 48 != s[i - 1] - 49 && s[i] - 48 != s[i - 1] - 47) || (s[i] - 48 != s[i + 1] - 49 && s[i] - 48 != s[i + 1] - 47)) return false;
    }
    return true;
}

int main(){
    int t; cin >> t;
    cin.ignore();
    while (t--){
        string s; cin >> s;
        if (kt(s)) cout << "YES" << endl;
            else cout << "NO" << endl;
    }
    return 0;
}