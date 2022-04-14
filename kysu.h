#ifndef KYSU_H
#define KYSU_H
#include "canbo.h"

class KySu: public CanBo
{
    // thuoc tinh
     string nganhDaoTao;
public:
    // phuong thuc
    // ham khoi tao khong doi so
    KySu();
    // ham khoi tao co doi so
    KySu(string hoten, string ngaySinh, string gioiTinh, string diaChi, string nganhDaoTao);
    // ham nhap
    void nhapThongTin();
    // ham hien thi thong tin
    void hienThiThongTin();
};

#endif // KYSU_H
