#include<iostream>
using namespace std;
int main(){
	int i[100];
	int n,a,b,demtang,demthap=0,max=0;
	cout << "nhap n=";
	cin>>n;
	for(a=1;a<=n;a++){
		cin>>i[a];
	}
	for(a=1;a<=n;a++){
		demtang=0;
		for(b=1;b<=n;b++){
		if(i[a]==i[b])demtang++; 
	}
	if(demtang>max)max=demtang;
}
	for(a=1;a<=n;a++){
		if(i[a]==0)demthap--;
		for(b=a+1;b<=n;b++){
			if(i[a]==i[b]){
				i[b]=0;
			}
		}
		demthap++;
	}
	cout<<"xay duoc nhieu nhat "<<max<<" tang va co "<<demthap<<" thap";
	return 0;
}
