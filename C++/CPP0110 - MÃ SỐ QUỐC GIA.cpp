#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    cin.ignore();
    while (t--){
        string s; cin >> s;
        int pos = s.find("084");
        while (pos != -1){
            s.erase(pos, 3);
            pos = s.find("084");
        }
        cout << s << endl;
    }
    return 0;
}