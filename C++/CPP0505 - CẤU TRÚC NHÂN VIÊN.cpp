#include<bits/stdc++.h>
using namespace std;

struct NhanVien {
    string manv, ten, gioitinh, ngaysinh, diachi, masothue, ngaykyhopdong; 
};

void nhap(NhanVien &a){
    a.manv = "00001";
    getline(cin, a.ten);
    cin >> a.gioitinh >> a.ngaysinh; cin.ignore();
    getline(cin, a.diachi);
    cin >> a.masothue >> a.ngaykyhopdong;
}

void in(NhanVien a){
    cout << a.manv << " " << a.ten << " " << a.gioitinh << " " << a.ngaysinh << " " << a.diachi << " " << a.masothue << " " << a.ngaykyhopdong;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}