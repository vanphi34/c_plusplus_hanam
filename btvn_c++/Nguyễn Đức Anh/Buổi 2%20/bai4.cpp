#include<iostream>
using namespace std;
int fibonaci(int n){
	if(n==0 || n==1) 
		return 1;
	else
		return (fibonaci(n-2)+fibonaci(n-1));
}
void check(int n){
	int i,d=0;
	for(i=0;i<=n;i++){
		if(n==fibonaci(i))
			d++;
	}
	if(d==1){
		cout<<n<<" thuoc day fibonaci";
	}
	else
		cout<<n<<" k thuoc day fibonaci";
}
int main(){
	int n;
	cout<<"Nhap n: "; 	
	cin>>n;
	check(n);
}
