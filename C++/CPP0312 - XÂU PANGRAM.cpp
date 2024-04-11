#include <iostream>
#include <set>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        cin.ignore();
        string s; cin >> s;
        int k; cin >> k;
        set<char> st;
        for (int i = 0; i < s.size(); i++){
            if (islower(s[i])) st.insert(s[i]);
        }
        if (st.size() + k >= 26 && s.size() >= 26) cout << 1 << endl;
            else cout << 0 << endl;
    }
    return 0;
}