#include <iostream>
using namespace std;
int main(){

    int n;
    do
    {
        cout<<"Nhap vao so n: ";
        cin>>n;
        if(n<0){
        	cout<<"Nhap sai! Nhap lai\n";
        }
    }while(n<0);
    int dem=2;
    cout<<n<<" so Fibonacci dau tien la:  ";
    if(n==1)
    {
        cout<<"1";
        return 0;
    }
    if(n==2)
    {
        cout<<"1  1";
        return 0;
    }
    int x=1,y=2,tg;
    cout<<"1  1";
    do
    {
        tg=y;
        y=x+y;
        x=tg;
        cout<<"  "<<tg;
        dem++;
    }while(dem!=n);
    return 0;
}
