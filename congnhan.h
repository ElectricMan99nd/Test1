#ifndef CONGNHAN_H
#define CONGNHAN_H
#include "canbo.h"

class CongNhan: public CanBo{
    // thuoc tinh
     string bac;
public:
    // phuong thuc
    // ham khoi tao khong doi so
    CongNhan();
    // ham khoi tao co doi so
    CongNhan(string hoten, string ngaySinh, string gioiTinh, string diaChi, string bac);
    // ham nhap
    void nhapThongTin();
    // ham hien thi thong tin
    void hienThiThongTin();
};

#endif // CONGNHAN_H
