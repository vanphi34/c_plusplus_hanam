#include <iostream>

using namespace std;

int main()
{
   int n, fib=2, fib1=1, fib2=1;
   cout<<"nhap so n= ";
   cin>>n;
   for(int i=2; i<=n; i++){
    fib=fib1+fib2;
    fib1=fib2;
    fib2=fib;
   }
   if(n==fib){
    cout<<"n thuoc day fibonacci";
   }
   else{
    cout<<"n khong thuoc day fibonacci";
   }
   return 0;
}
