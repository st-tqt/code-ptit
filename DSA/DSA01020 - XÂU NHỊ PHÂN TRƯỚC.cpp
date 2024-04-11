#include <iostream>
#include <string>
using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while (t--){
        string s; cin >> s;
        int i;
        for (i = s.size() - 1; i >= 0; i--){
            if (s[i] == '1'){
                s[i] = '0';
                for (int j = i + 1; j < s.size(); j++) s[j] = '1';
                break;
            }
        }
        if (i < 0){
            for (int j = 0; j < s.size(); j++) cout << "1";
            cout << endl;
        }
        else cout << s << endl;
    }
}