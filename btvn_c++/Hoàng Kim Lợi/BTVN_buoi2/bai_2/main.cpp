#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,dem=0,tong=0,i,j;
    do
    {
        cout << "Nhap mot so nguyen duong n= "; cin>>n;
        if( n<0 ) cout << "Gia tri cua n phai nguyen duong.";
    } while ( n<0 );

    for( i=2;i<=n;i++)
    {
        int a=0;
       for( j=2;j<=sqrt(i);j++)
       {
           if(i%j==0) a++;
       }
       if(a==0)
       {
           dem++;
           tong+=i;
       }
    }
    cout <<"Tong cac so nguyen to tu [1.." << n << "] la:" << tong << endl;
    cout <<"So cac so nguyen to tu [1.." << n << "] la:" << dem;
    return 0;
}
