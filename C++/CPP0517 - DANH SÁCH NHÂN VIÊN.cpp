#include<bits/stdc++.h>
using namespace std;

struct NhanVien {
    string manv, ten, gioitinh, ngaysinh, diachi, masothue, ngaykyhopdong;
};

int d = 0;

void nhap(NhanVien &a){
    d++;
    string p = to_string(d);
    if (d < 10) a.manv = "0000" + p;
        else a.manv = "000" + p;
    cin.ignore();
    getline(cin, a.ten);
    cin >> a.gioitinh >> a.ngaysinh; cin.ignore();
    getline(cin, a.diachi);
    cin >> a.masothue >> a.ngaykyhopdong;
}

void inds(NhanVien a[], int n){
    for (int i = 0; i < n; i++){
        cout << a[i].manv << " " << a[i].ten << " " << a[i].gioitinh << " " << a[i].ngaysinh << " " << a[i].diachi << " " << a[i].masothue << " " << a[i].ngaykyhopdong << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}