#include<iostream>
using namespace std;
float tinhtien(int a){
    float km=0;
    cout<<"Nhap so tien thanh toan: ";
    cin>>a;
    if(a>=200 && a<300)
        km=a*20/100;
    else if(a>=300)
        km=a*30/100;
    else   
        km=0;
    cout<<"So tien km la: "<<km;
    return 0;            
}
int main(){
    int a;
    tinhtien(a);
}
