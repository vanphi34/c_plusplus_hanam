#include <iostream>
using namespace std;
int main()
{
	int i,j,a;
	for(i=1;i<=6;i++)
	 { 
	    for(j=0;j<6-i;j++)
	     cout<<" "; 
	    for(a=0;a<2*i-1;a++)
	  	  cout<<"*";
        cout<<"\n";
	 }
	cout<<"    ***"<<endl;
	for(i=2;i<=6;i++)
	 { 
	    for(j=0;j<6-i;j++)
	     cout<<" "; 
	    for(a=0;a<2*i-1;a++)
	  	  cout<<"*";
        cout<<"\n";
	 }
	 cout<<"    ***"<<endl;
	 cout<<"    ***"<<endl;
	 cout<<"    ***"<<endl;
	  return 0;
}

