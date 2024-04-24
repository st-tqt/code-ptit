#include<bits/stdc++.h>
using namespace std;

class SinhVien {
    public: 
        string masv, ten, lop, ngaysinh;
        float gpa;
        void nhap(){
            masv = "B20DCCN001";
            getline(cin, ten);
            cin >> lop >> ngaysinh >> gpa;
            if (ngaysinh.size() == 8) ngaysinh = '0' + ngaysinh.substr(0, 2) + '0' + ngaysinh.substr(2, 6);
            else if (ngaysinh.size() == 9){
                if (ngaysinh[1] == '/') ngaysinh = '0' + ngaysinh;
                else ngaysinh = ngaysinh.substr(0, 3) + '0' + ngaysinh.substr(3, 6);
            }
        }
        void xuat(){
            cout << masv << " " << ten << " " << lop << " " << ngaysinh << " " << setprecision(2) << fixed << gpa << endl;
        }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}