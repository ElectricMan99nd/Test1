#include "canbo.h"

CanBo::CanBo()
{
//cout << "canbo";
}

CanBo::CanBo(string hoTen, string ngaySinh, string gioiTinh, string diaChi){
    this->hoTen = hoTen;
    this->ngaySinh = ngaySinh;
    this->gioiTinh = gioiTinh;
    this->diaChi = diaChi;
    cout << "canbo co doi so";
}

void CanBo::nhapThongTin(){
    cout << "\tNhap ho ten: ";
    getline(cin, hoTen);
    cout << "\tNhap ngay sinh (dd/mm/yy): ";
    getline(cin, ngaySinh);
    cout << "\tNhap gioi tinh: ";
    getline(cin, gioiTinh);
    cout << "\tNhap dia chi: ";
    getline(cin, diaChi);
}

void CanBo::hienThiThongTin(){
    cout << "\tHo ten: " << hoTen << endl;
    cout << "\tNgay sinh: " << ngaySinh << endl;
    cout << "\tGioi tinh: " << gioiTinh << endl;
    cout << "\tDia chi: " << diaChi << endl;
}
string CanBo::getHoTen(){
    return this->hoTen;
}


