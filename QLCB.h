#ifndef QLCB_H
#define QLCB_H

#define KY_SU 1
#define NHAN_VIEN 2
#define CONG_NHAN 3

#include "canbo.h"
#include "congnhan.h"
#include "kysu.h"
#include "nhanvien.h"
#include <list>

class QLCB
{
    // thuoc tinh
private:
    list<CanBo*> dscb;
    CanBo *cb;
    // phuong thuc
public:
    // ham khoi tao
    QLCB();
    ~QLCB();
    // ham them can bo
    void themCanBo(CanBo *cb);
    // ham nhap danh sach
    void nhapDanhSach();
    // ham tim kiem theo ten
    void timKiemCanBo(string hoTen);
};

#endif // QLCB_H
