#include <iostream>
using namespace std;
int main(){
	
    int n;
    do
    {
        cout<<"Nhap vao so n: ";
        cin>>n;
        if(n<0) cout<<"Nhap sai! Nhap lai\n";
    }while(n<0);
    if(n==1 || n==2 || n==3)
    {
        cout<<n<< "co thuoc day Fibonacci!";
        return 0;
    }
    int x=2,y=3,tg;
    do
    {
        tg=y;
        y=x+y;
        x=tg;
        if(n==y)
        {
            cout<<n<<" co thuoc day Fibonacci!";
            return 0;
        }
    }while(n>y);
    cout<<n<<" khong thuoc day Fibonanci!";
    return 0;
}
