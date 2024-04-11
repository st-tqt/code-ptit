#include <iostream>
#include <string>
using namespace std;

int n, k;

void Try(string s, int i){
    if (i == n){
        int d = 0;
        for (int j = 0; j < s.size(); j++){
            if (s[j] == '1') d++;
        }
        if (d == k) cout << s << endl;
    }
    else {
        Try(s + "0", i + 1);
        Try(s + "1", i + 1);
    }
}

int main(){
    int t; cin >> t;
    while (t--){
        cin >> n >> k;
        Try("", 0);
    }
}