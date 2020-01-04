#include <iostream>
using namespace std;
int main()
{
    float n,s=0;
    do
    {
        cout<<"So kwh dien tieu thu trong thang: ";
        cin>>n;
        if(n<0) cout<<"So kwh khong duoc < 0 ! Nhap lai!\n";
    }while(n<0);
    if(n<=100) s=n*750;
    if( n>100 && n<=200 ) s=(n-100)*1250+100*750;
    if( n>200 && n<=300 ) s=(n-200)*1750+100*1250+100*750;
    if( n>300 ) s=(n-300)*3000+100*1750+100*1250+100*750;
    cout<<"So tien phai thanh toan: "<<s;
    return 0;
}
