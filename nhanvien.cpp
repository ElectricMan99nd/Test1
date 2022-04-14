#include "nhanvien.h"

NhanVien::NhanVien()
{
}

NhanVien::NhanVien(string hoTen, string ngaySinh, string gioiTinh, string diaChi, string congViec){
    this->hoTen = hoTen;
    this->ngaySinh = ngaySinh;
    this->gioiTinh = gioiTinh;
    this->diaChi = diaChi;
    this->congViec = congViec;
}

// ham nhap
void NhanVien::nhapThongTin() {
    CanBo::nhapThongTin();
    cout << "\tNhap cong viec: ";
    getline(cin, congViec);
    }

// ham hien thi thong tin
void NhanVien::hienThiThongTin() {
        CanBo::hienThiThongTin();
         cout << "\tCong viec: " << congViec << endl;
    }
