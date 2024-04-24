#include<bits/stdc++.h>
using namespace std;

struct ThiSinh {
    string ten, ngaysinh;
    float mon1, mon2, mon3, tongdiem;
};

void nhap(ThiSinh &A){
    getline(cin, A.ten); 
    cin >> A.ngaysinh;
    cin >> A.mon1 >> A.mon2 >> A.mon3;
    A.tongdiem = A.mon1 + A.mon2 + A.mon3;
}

void in(ThiSinh A){
    cout << A.ten << " " << A.ngaysinh << " " << setprecision(1) << fixed << A.tongdiem << endl;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}