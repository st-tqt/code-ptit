#include <bits/stdc++.h>
using namespace std;

class NhanVien {
    public:
        string manv, ten, gioitinh, ngaysinh, diachi, masothue, ngaykyhopdong;
        friend istream &operator >> (istream &is, NhanVien &a){
            a.manv = "00001";
            getline(is, a.ten);
            is >> a.gioitinh >> a.ngaysinh; is.ignore();
            getline(is, a.diachi);
            is >> a.masothue >> a.ngaykyhopdong;
            return is;
        }
        friend ostream &operator >> (ostream &os, NhanVien a){
            os << a.manv << " " << a.ten << " " << a.gioitinh << " " << a.ngaysinh << " " << a.diachi << " " << a.masothue << " " << a.ngaykyhopdong; 
            return os;
        }
};

int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}