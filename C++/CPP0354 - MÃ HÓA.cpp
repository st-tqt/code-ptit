#include <iostream>
#include <map>
using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while (t--){
        string s; cin >> s;
        map<char, int> mp;
        mp[s[0]]++;
        for (int i = 1; i < s.size(); i++){
            if (s[i] != s[i - 1]){
                cout << s[i - 1] << mp[s[i - 1]];
                mp[s[i - 1]] = 0;
            }
            mp[s[i]]++;
        }
        cout << s[s.size() - 1] << mp[s[s.size() - 1]] << endl; 
    }
    return 0;
}