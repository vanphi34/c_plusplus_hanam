#include<iostream>
using namespace std;
int main(){
	int a,b,n;
	cout <<"nhap n=";
	cin>>n;
	for(a=1;a<=n;a++){
		for(b=1;b<=a;b++){
			cout<<" * ";
		}
		cout<<"\n";
	}
	return 0;
}
