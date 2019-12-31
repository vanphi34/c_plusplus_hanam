#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Nhap so nguyen n: ";
    cin>>n;
    int dem=0;
    if(n==1)
    {
        cout<<"Trong doan [1..."<<n<<"] co 0 so nguyen to.";
        return 0;
    }
    if(n==2)
    {
        cout<<"Trong doan [1..."<<n<<"] co 1 so nguyen to.";
        return 0;
    }

    for(int i=2;i<=n;i++)
    {
        bool check=true;
        for(int j=2;j<i-1;j++){
            if(i%j==0){
                check=false;
                break;
            }
        }
        if(check==true){
            dem++;
        }
        check=true;
    }
    cout<<"Vay trong doan [1..."<<n<<"] co "<<dem<<" so nguyen to.";
    return 0;
}
