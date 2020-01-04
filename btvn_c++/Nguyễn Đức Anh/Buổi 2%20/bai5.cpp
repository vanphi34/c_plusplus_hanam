#include<iostream>
using namespace std;
int fibonaci(int n){
	if(n==0 || n==1) 
		return 1;
	else
		return (fibonaci(n-2)+fibonaci(n-1));
}
void check(int a){
	int i;
	cin>>a;
	for(i=0;i<a;i++){
		cout<<fibonaci(i)<<" ";
	}
}
int main(){
	int a;
	check(a);
}

