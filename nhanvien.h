#ifndef NHANVIEN_H
#define NHANVIEN_H
#include "canbo.h"

class NhanVien: public CanBo
{
    // thuoc tinh
     string congViec;
public:
    // phuong thuc
    // ham khoi tao khong doi so
    NhanVien();
    // ham khoi tao co doi so
    NhanVien(string hoten, string ngaySinh, string gioiTinh, string diaChi, string congViec);
    // ham nhap
    void nhapThongTin();
    // ham hien thi thong tin
    void hienThiThongTin();
};

#endif // NHANVIEN_H
