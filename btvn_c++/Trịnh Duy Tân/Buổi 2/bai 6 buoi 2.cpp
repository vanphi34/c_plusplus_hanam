#include<iostream>
using namespace std;
int main ()
{
	int ngay , thang , nam ;
	
	do
	{
	cout<<"nhap ngay :";
	cin>> ngay;
	cout<<"nhap thang :";
	cin>>thang;
	cout<<"nhap nam : ";
	cin>>nam;
	if(ngay<0||thang<0||nam<0)
	{
		cout<<"nhap lai ngay  thang nam \n "; 
	}
	switch(thang){
		case 1: case 3: case 5 :case 7: case 8 : case 10: case 12 :
			if(ngay>0&&ngay<=31)
			{
				cout<< "ngay" <<  ngay << "thang"<<  thang << "nam " << nam<<"la hop le";break;
			}
			else
			{
				cout<< "ngay" <<  ngay << "thang"<<  thang << "nam " << nam<<"la khong hop le\n";break;
			}
		case 4: case 6: case 9 : case 11:
			if(ngay>0&&ngay<=30)
			{
				cout<< "ngay" <<  ngay << "thang"<<  thang << "nam " << nam<<"la hop le";break;
			}
			else
			{
				cout<< "ngay" <<  ngay << "thang"<<  thang << "nam " << nam<<"la khong hop le\n";break;
			}
		case 2:
			if(ngay>0&&ngay<=28)
			{
				cout<< "ngay" <<  ngay << "thang"<<  thang << "nam " << nam<<"la hop le";break;
			}
			else if(nam%4==0&&ngay>0&&ngay<=29)
			{
				cout<< "ngay " <<  ngay << " thang "<<  thang << "nam " << nam<<"la hop le";break;
			}
			else
			{
				cout<< "ngay" <<  ngay << "thang"<<  thang << "nam " << nam<<"la khong hop le\n";break;
			}
		default : cout<< "ngay" <<  ngay << "thang"<<  thang << "nam " << nam<<"la khong hop le\n";break;
			
	}
	}while (ngay<0||thang<0||nam<0);
	
}
