#include<iostream>
using namespace std;
int main(){
	int d,m,y;
	do{
		cout<<"Nhap ngay :";cin>>d;
		cout<<"Nhap thang :";cin>>m;
		cout<<"Nhap nam : ";cin>>y;
		switch(m){
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:{
				if(d>0 && d<=31){
					cout<<"Ngay "<<d<<" Thang "<<m<<" Nam "<<y<<" hop le!";
					break;
				}
				else{
					cout<<"Ngay "<<d<<" Thang "<<m<<" Nam "<<y<<" k hop le!";
					break;
				}
			case 4: case 6: case 9: case 11:{
				if(d>0 && d<=30){
					cout<<"Ngay "<<d<<" Thang "<<m<<" Nam "<<y<<" hop le!";
					break;	
				}
				else{
					cout<<"Ngay "<<d<<" Thang "<<m<<" Nam "<<y<<" k hop le!";
					break;
				}
			case 2:{
				if(y%4==0){
					if(d>0 && d<=29){
						cout<<"Ngay "<<d<<" Thang "<<m<<" Nam "<<y<<" hop le!";
						break;
					}
					else{
						cout<<"Ngay "<<d<<" Thang "<<m<<" Nam "<<y<<" k hop le!";
						break;
					}
				}
				else{
					if(d>0 && d<=28){
						cout<<"Ngay "<<d<<" Thang "<<m<<" Nam "<<y<<" hop le!";
						break;
					}
					else{
						cout<<"Ngay "<<d<<" Thang "<<m<<" Nam "<<y<<" k hop le!";
						break;
					}
				}
			}
			default: cout<<"Ngay "<<d<<" thang "<<m<<" nam "<<y<<" k hop le!";
			break;				
		}
	}
}
}while(d<0 || m<0 || y<0);}


