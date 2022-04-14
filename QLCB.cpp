#include "QLCB.h"

QLCB::QLCB()
{
}

QLCB::~QLCB(){
    if(cb != NULL){
        delete cb;
        cb = NULL;
    }
}

// ham them can bo
void QLCB::themCanBo(CanBo *cb){
    dscb.push_back(cb);
};

// ham nhap danh sach
void QLCB::nhapDanhSach(){
    int soLuongCanBo;
    int chon;
    cout << "Nhap vao so luong can bo: ";
    cin >> soLuongCanBo;
     cout << "Nhap thong tin chi tiet: " << endl;
            for (int i = 0; i < soLuongCanBo; i++) {
                cout << "Lan nhap thu " << (i + 1) << ":" << endl;
                cout << "Chon can bo (1-KySu; 2-NhanVien; 3-CongNhan): ";
                cin >> chon;
                fflush(stdin);

                switch (chon) {
                case KY_SU:
                    cb = new KySu();
                    break;
                case NHAN_VIEN:
                    cb = new NhanVien();
                    break;
                case CONG_NHAN:
                    cb = new CongNhan();
                    break;

                default:
                    cb = new KySu();
                    break;
                }

                // sau khi chon loai can bo thi nhap thong tin cho can bo do
                cb->nhapThongTin();

                // nhap xong roi thi them can bo vao danh sach
                themCanBo(cb);
            }
};

// ham tim kiem theo ten
void QLCB::timKiemCanBo(string hoTen){
    for (CanBo *cb : dscb) {
                if (strcmp(hoTen.c_str(), cb->getHoTen().c_str())==0) {
                    cb->hienThiThongTin();
                }
            }
};
