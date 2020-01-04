#include <iostream>

using namespace std;

int main()
{

   for(int i=1; i<=35; i++)
   {
   	for(int j=1; j<=35;j++)
	{
		if(j<i)
			cout<<"*";
	}cout<<"\n";
   }
    return 0;
}
