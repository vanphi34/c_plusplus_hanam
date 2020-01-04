#include<iostream>
using namespace std;
bool snt(int n){
	int i,dem=0;
	for(i=1;i<=n;i++)
		if (n%i==0 && n>0)
			dem++;
	if (dem==2)
		return true;
	return false;
}
void tongsnt(int n){
	int i,dem=0,t=0;
    for(i=1;i<=n;i++)
        if(snt(i)==true){
        	dem++;
        	t=t+i;
        }
    cout<<"So cac snt la: "<<dem; 
	cout<<"\nTong cac snt la: "<<t;   
}
int main(){
    int n;
    cout<<"Nhap n: ";
    do{
    cin>>n;
    if(n<0)
    cout<<"nhap lai n";
	}while(n<0);
    tongsnt(n);
}

