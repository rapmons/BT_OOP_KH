#include"CTKH.h"
class sach:public CTKH
{
protected:
string loai;
   
public:
    sach(string,int,bool,string);
    ~sach();
    void Nhap();
    void Xuat();
    friend ostream& operator<<(ostream&,const sach&);
};


