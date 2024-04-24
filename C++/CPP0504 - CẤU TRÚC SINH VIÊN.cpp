#include<bits/stdc++.h>
using namespace std;

struct SinhVien {
    string maSV, ten, lop, ngaysinh;
    float gpa;
};

void nhap(SinhVien &a){
    a.maSV = "B20DCCN001";
    getline(cin, a.ten); 
    cin >> a.lop >> a.ngaysinh >> a.gpa;
    if (a.ngaysinh.size() == 8){
        a.ngaysinh = '0' + a.ngaysinh.substr(0, 2) + '0' + a.ngaysinh.substr(2, 6);
    }
    else if (a.ngaysinh.size() == 9){
        if (a.ngaysinh[1] == '/') a.ngaysinh = '0' + a.ngaysinh;
        else a.ngaysinh = a.ngaysinh.substr(0, 3) + '0' + a.ngaysinh.substr(3, 6);
    }
}

void in(SinhVien a){
    cout << a.maSV << " " << a.ten << " " << a.lop << " " << a.ngaysinh << " " << setprecision(2) << fixed << a.gpa << endl;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}