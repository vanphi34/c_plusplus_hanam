#include <iostream>

using namespace std;

int main()
{
    for(int i=0; i<7;i++)
	{
		for(int j=-6;j<7;j++)
		{
			if(j>=-i && j<=i)
			{
				cout<<"*";
			}
			else
			cout<<" ";
		}cout<<"\n";
	}
	//
	for(int i=0; i<7;i++)
	{
		for(int j=-6;j<7;j++)
		{
			if(j>=-i && j<=i)
			{
				cout<<"*";
			}
			else
			{
				if(j>=-1&&j<=1)
					cout<<"*";
				else
					cout<<" ";
			}
		}cout<<"\n";
	}
	//
	for(int i=1; i<=4;i++)
		{cout<<"     ";
			for(int j=1;j<=3;j++)
	     {
		  cout<<"*";
	     }    cout<<endl;
		}


    return 0;
}
