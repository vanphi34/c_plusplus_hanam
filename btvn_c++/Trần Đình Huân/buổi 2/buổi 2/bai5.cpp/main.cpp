#include <iostream>

using namespace std;

int main()
{
   int n, fib=1, fib1=0, fib2=1;
   cout<<"nhap so n= ";
   cin>>n;
   for(int i=1; i<=n; i++){
    fib=fib1+fib2;
    fib1=fib2;
    fib2=fib;
    cout<<"\n"<<fib;
   }

    return 0;
}
