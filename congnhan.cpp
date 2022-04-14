#include "congnhan.h"

CongNhan::CongNhan()
{
//cout << " Cong Nhan";
}

CongNhan::CongNhan(string hoTen, string ngaySinh, string gioiTinh, string diaChi, string bac){
    this->hoTen = hoTen;
    this->ngaySinh = ngaySinh;
    this->gioiTinh = gioiTinh;
    this->diaChi = diaChi;
    this->bac = bac;
}

// ham nhap
void CongNhan::nhapThongTin() {
    CanBo::nhapThongTin();
    cout << "\tNhap bac: ";
    getline(cin, bac);
    }

// ham hien thi thong tin
void CongNhan::hienThiThongTin() {
        CanBo::hienThiThongTin();
         cout << "\tBac: " << bac << endl;
    }
