#include<iostream>
using namespace std;
int fb(int n)
{

	if(n==0||n==1||n==2||n==3)
	return n;
	return fb(n-2)+fb(n-1);
	// fb la fibonaci
	// day fibonasi so sau = tong 2 so lien ke truoc no 
}
int main()
{
	int i, n , dem=0;
	cout<< "nhap n";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		if(n==fb(i))
		dem++;
	}
	if(dem==1)
	{
		cout<<"so vua nhap thuoc day fibonaci";
	}
	else
	cout<<"so vua nhap khong thuoc day fibonaci";
	return 0;
}
