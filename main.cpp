#include "QLCB.h"
#include <string.h>
int main()
{
    string nameCB;
    QLCB *qlcb = new QLCB();

            qlcb->nhapDanhSach();

            cout << "Nhap vao ho ten can tim kiem: ";

            getline(cin, nameCB);

            qlcb->timKiemCanBo(nameCB);
            if(qlcb != NULL){
                delete qlcb;
                qlcb = NULL;
            }
}
