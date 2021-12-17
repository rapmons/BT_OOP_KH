#include"sach.h"
sach::sach(string mct,int nxb,bool kvxb,string loai)
: CTKH(mct,nxb,kvxb)
{
    this->loai=loai;
}
sach::~sach()
{

}
void sach::Xuat()
{
    cout<<"x";
}
void sach::Nhap()
{
    cout<<"nhap mct:";
    cin.ignore(52318,'\n');
    getline(cin,mct);
    cout<<"nhap nxb:";
    cin>>nxb;
    cout<<"nhap kvxb:";
    cin>>kvxb;
    cout<<"nhap loai sach";
    getline(cin,loai);
}

    

ostream & operator<<(ostream & o,const sach & p)
{
    o<<"mct:"<<p.mct<<",nxb:"<<p.nxb;
    if(p.kvxb==true)
    {
        o<<",kvxb:quoc te"<<endl;
    }
    else o<<",kvxb:trong nuoc"<<endl;
    o<<"loai:"<<p.loai;
    return o;
}