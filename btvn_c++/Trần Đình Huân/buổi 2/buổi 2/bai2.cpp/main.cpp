#include <iostream>

using namespace std;

int main()
{
    int n,y=0,s=0;
    cout<<"nhap gia tri cua n= ";
    cin>>n;
    if(n>0){
		for(int i=2;i<=n,i++){
			int dem=0;
			for(int j=1,j<=i,j++){
				if(i%j==0){
					dem++;
				}
			}
			if(dem==2){
				cout<<i;
				s+=i;
				y++;
			}

		}
    }
    cout<<"tong cac so nguyen to trong day la s= "<<s;
    cout<<"so cac so nguyen to trong day la y= "<<y;

    return 0;
}
