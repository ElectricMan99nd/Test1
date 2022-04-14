#include "kysu.h"

KySu::KySu()
{
// cout << "KySu";
}

KySu::KySu(string hoTen, string ngaySinh, string gioiTinh, string diaChi, string nganhDaoTao){
    this->hoTen = hoTen;
    this->ngaySinh = ngaySinh;
    this->gioiTinh = gioiTinh;
    this->diaChi = diaChi;
    this->nganhDaoTao = nganhDaoTao;
    cout << "KySu co doi so";
}

// ham nhap
void KySu::nhapThongTin() {
    CanBo::nhapThongTin();
    cout << "\tNhap nganh dao tao: ";
    getline(cin, nganhDaoTao);
    }

// ham hien thi thong tin
void KySu::hienThiThongTin() {
        CanBo::hienThiThongTin();
         cout << "\tNganh Dao Tao: " << nganhDaoTao << endl;
    }
