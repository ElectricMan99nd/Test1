#ifndef CANBO_H
#define CANBO_H
#include <iostream>
#include <string.h>
using namespace std;


class CanBo
{
protected:
    // thuoc tinh
         string hoTen;
         string ngaySinh;
         string gioiTinh;
         string diaChi;
    // phuong thuc
public:
    // ham khoi tao khong doi so
    CanBo();
    // ham khoi tao co doi so
    CanBo(string hoTen, string ngaySinh, string gioiTinh, string diaChi);
    // ham nhap
    virtual void nhapThongTin();
    // ham hien thi
    virtual void hienThiThongTin();
    // ham lay thong tin ho ten
    string getHoTen();
//    void khoiTao(string hoTen, string ngaySinh, string gioiTinh, string diaChi);
};

#endif // CANBO_H
