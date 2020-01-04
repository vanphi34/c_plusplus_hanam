#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Nhap so nguyen n: ";
    cin>>n;
    int dem=2;
    if(n==1)
    {
        cout<<"Trong doan [1..."<<n<<"] co 1 so nguyen to.";
        return 0;
    }
    if(n==2)
    {
        cout<<"Trong doan [1..."<<n<<"] co 2 so nguyen to.";
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        int x=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
                x++;
        }
        if(x!=0) dem++;
    }
    cout<<"Vay trong doan [1..."<<n<<"] co "<<dem<<" so nguyen to.";
    return 0;
}
