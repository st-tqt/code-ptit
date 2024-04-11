#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int i = 2;
        while (n > 1){
            int d = 0;
            while (n % i == 0){
                d++;
                n /= i;
            }
            if (d > 0) cout << i << " " << d << " ";
            i++;
        }
        cout << endl;
    }
    return 0;
}