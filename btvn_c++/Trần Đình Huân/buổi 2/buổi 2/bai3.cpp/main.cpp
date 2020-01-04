#include <iostream>

using namespace std;

int main()
{
    float n;
    cout<<"nhap so dien n= ";
    do{
        cin>>n;
        if(n<=0){
            cout<<"so dien khong hop le, nhap lai n= ";
        }
    }while(n<=0);
    if(n>0&&n<=100){
        cout<<"so tien phai tra la: "<<750*n;
    }
    if(n>=101&&n<=200){
        cout<<"so tien phai tra la: "<<1250*n;
    }
    if(n>=201&&n<=300){
        cout<<"so tien phai tra la: "<<1750*n;
    }
    if(n>=301){
        cout<<"so tien phai tra la: "<<3000*n;
    }
}
