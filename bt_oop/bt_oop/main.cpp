#include"BaiBao.h"
#include"sach.h"
#include"CTKH.h"
#include<iostream>
#include<string>
#include "listCTKH.cpp"
using namespace std;
template<class T>
bool up(T& p,T& v)
{
    return (p > v);
}
template<class T>
bool down(T& p,T& v)
{
    return p<v;
}
 

int main()
  { 
    string ten;
    int luachon;
    int t=6;
    cout << "--------CHUONG TRINH QUAN LY CTKH--------" << endl;
    cout << "nhap ten cua ban:";
    fflush(stdin);
    getline(cin, ten);
    listCTKH<CTKH*> list(ten);
    do {
        cout << "lua chon:" << endl;
        cout << "0.Add sach:" << endl;
        cout << "1.Add baibao" << endl;
        cout << "2.RemoveAt" << endl;
        cout << "3.Update" << endl;
        cout << "4.sort" << endl;
        cout << "5.xuat" << endl;
        cout << "6.thoat" << endl;
        cout << "nhap lua chon cua ban:";
        cin >> luachon;
        switch (luachon)
        {
        
        case 1: {
            listCTKH<CTKH*> list(ten);
            CTKH* x = new BaiBao();
            x->Nhap();
            
           // cout << &x << endl;
            list.Add(x);
            CTKH* y = new BaiBao("1",1,1,"1",1);
            
            cout << list.IndexOf(x);
            //cout<<typeid(x).name()<<endl;
        }
              break;
        case 2: {
            int vitri;
            cout << "nhap vitri can xoa:";
            cin >> vitri;
            list.RemoveAt(vitri - 1);
        } break;
        case 3: {
            listCTKH<CTKH*> list(ten);
            cout << "nhap ct can update:" << endl;
            CTKH* t = new BaiBao();

            t->Nhap();
            cout << list.IndexOf(t);
            if (list.IndexOf(t) != -1)
            {
                CTKH* y = new BaiBao;
                y->Nhap();
                list.Update(list.IndexOf(t), y);
            }
            else cout << "k tim thay" << endl;


        }
              break;
        case 4:
        {
            list.sapxep(up);
        }break;
        case 5:
        {
            cout << list;
        }break;
        default:
            t = 7;
            break;
        }
    } while (t == 6);



  
 system("pause");



  
   return 0;
  
}