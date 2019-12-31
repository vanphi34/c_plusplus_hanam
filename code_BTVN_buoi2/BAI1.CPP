#include <iostream>
using namespace std;
int main()
{
    float n;
    float s;
    do
    {
        cout<<"So tien khach hang thanh toan: ";
        cin>>n;
        if ( n<0 ){
            cout<<"So tien thanh toan sai! Nhap lai\n";
        }
    }while(n<0);

    if( (n>=200) && (n<300) ){
        s=n-n*0.2;
        cout<<"So tien khach hang phai thanh toan la:"<< s ;
        return 0;
    }

    if( n>300 ){
        s=n-n*0.3;
        cout<<"So tien khach hang phai thanh toan la:"<< s ;
        return 0;
    }
    cout<<"So tien khach hang phai thanh toan la:"<< n ;
    return 0;
}
