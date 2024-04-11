#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    string s = "8";
    for (int i = 1; i < n - 1; i++){
        if (i % 4 == 0) s += "8";
            else s += "6";
    }
    s += "6";
    if (s[n - 2] == '8' && s[n - 3] == '6' && s[n - 4] == '8') s[n - 2] = '6';
    if (s[n - 2] == '6' && s[n - 3] == '6' && s[n - 4] == '6') s[n - 2] = '8';
    cout << s << endl;
    string p = "8";
    for (int i = 0; i < n - 2; i++){
        if (i % 2 == 0) p += "6";
            else p += "8";
    }
    p += "6";
    while (true){
        for (int i = n - 2; i > 0; i--){
            if (s[i] == '6' && s[i - 1] != '8'){
                s[i] = '8'; int d = 1;
                for (int j = i + 1; j < n - 1; j++){
                    if (d % 4 == 0) s[j] = '8';
                        else s[j] = '6';
                    d++;
                }
                if (s[i + 1] == '8'){
                    s[i + 1] = '6';
                    if (i + 2 < n - 1) s[i + 2] = '8';
                }
                if (s[n - 2] == '6' && s[n - 3] == '6' && s[n - 4] == '6') s[n - 2] = '8';
                cout << s << endl;
                break;
            }
        }
        if (s == p) break;
    }
}