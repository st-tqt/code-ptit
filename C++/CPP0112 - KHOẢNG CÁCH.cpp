#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        double x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        double s = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
        cout << setprecision(4) << fixed << s << endl;
    }
    return 0;
}