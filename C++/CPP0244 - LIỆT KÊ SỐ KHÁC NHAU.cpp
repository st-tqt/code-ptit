#include <iostream>
#include <set>
using namespace std;
int main(){
    int n; cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        s.insert(x);
    }
    for (set<int>::iterator it = s.begin(); it != s.end(); it++) cout << *it << " ";
    cout << endl;
    return 0;
}