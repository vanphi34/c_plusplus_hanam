#include <iostream>
using namespace std;
int main()
{ 
  float cd,cr,c,s;
  do
  {
  	cout<<"Nhap chieu rong cua hinh chu nhat:";
	cin>>cr;
	cout<<endl;
	if(cr<=0) cout<<"Chieu rong phai co gia tri lon hon 0\n";
  }while(cr<=0);
  do
  {
  	cout<<"Nhap chieu dai cua hinh chu nhat:";
	cin>>cd;
	cout<<endl;
  	if(cd<cr) cout<<"Chieu dai phai co gia tri lon hon chieu rong"<<endl;
  }while(cd<cr);
  c=2*(cd+cr);
  s=cd*cr;
  cout<<"Chu vi cua hinh chu nhat la: "<<c<<" dvdd"<<endl;
  cout<<"Dien tich cua hinh chu nhat la:"<<s<<" dvdt";
  return 0;
  
}
