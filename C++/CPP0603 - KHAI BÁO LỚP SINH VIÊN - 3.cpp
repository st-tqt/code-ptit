#include<bits/stdc++.h>
#include <sstream>
using namespace std;

class SinhVien {
    public: 
        string masv, ten, lop, ngaysinh;
        float gpa;
        friend istream &operator >> (istream &is, SinhVien &a) {
            a.masv = "B20DCCN001";
            getline(is, a.ten);
            is >> a.lop >> a.ngaysinh >> a.gpa;
            if (a.ngaysinh.size() == 8) a.ngaysinh = '0' + a.ngaysinh.substr(0, 2) + '0' + a.ngaysinh.substr(2, 6);
            else if (a.ngaysinh.size() == 9){
                if (a.ngaysinh[1] == '/') a.ngaysinh = '0' + a.ngaysinh;
                else a.ngaysinh = a.ngaysinh.substr(0, 3) + '0' + a.ngaysinh.substr(3, 6);
            }
            stringstream ss(a.ten);
            string tmp, p = "";
            while (ss >> tmp){
                tmp[0] = toupper(tmp[0]);
                for (int i = 1; i < tmp.size(); i++) tmp[i] = tolower(tmp[i]);
                p = p + tmp + " ";
            }
            a.ten = p;
            return is;
        }
        friend ostream &operator << (ostream &os, SinhVien a) {
            os << a.masv << " " << a.ten << " " << a.lop << " " << a.ngaysinh << " " << setprecision(2) << fixed << a.gpa << endl;
            return os;
        }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}