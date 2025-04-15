#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    float q1 , q2,q3, tongdiemtb ,diemgk, diemck;
    cout<<"==========Diem kiem tra================\n";
    cout<<"Nhap diem kiem tra 1:";
    cin>>q1;
    cout<<"\n";
    cout<<"Nhap diem kiem tra 2:";
    cin>>q2;
    cout<<"\n";
    cout<<"Nhap diem kiem tra 3:";
    cin>>q3;
    cout<<"\n";
    cout<<"==========Diem thi giua ky==============\n";
    cout<<"Nhap diem thi giua ky:";
    cin>>diemgk;
    cout<<"\n";
    cout<<"===========Diem thi cuoi ky================\n";
    cout<<"Nhap diem thi cuoi ky:";
    cin>>diemck;
    cout<<"\n";
    tongdiemtb = (q1+q2+q3+(diemgk *2)+(diemck *3))/8;
    cout<<"===========Diem Trung Binh===========";
    cout<<":"<<tongdiemtb;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("abc.inp","r",stdin);
    freopen("abc.out"),"w",stdout;

    return 0;
}


