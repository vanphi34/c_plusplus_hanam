#include <iostream>

using namespace std;


int mang1[100];


/*int main()   //Cach lam 1
{
    int n,i,tam,max1,max2,sl;
    sl=0;
    max1=0;
    max2=0;
    cout <<"Hay nhap so phan tu cua mang vao"<< endl;
    cin >>n;
    for(i=1;i<= sizeof(mang1);i++)
        mang1[i]=0;
    for(i=1;i<=n;i++)
    {
    	cout <<"Nhap phan tu thu "<<i<<": "<<endl;
        cin >>tam;
        if (mang1[tam]==0) sl++;
        mang1[tam]++;
        if (mang1[tam]>max2) max2=mang1[tam];
    }
    cout << max2 <<"va"<< sl <<endl;
    return 0;
}
*/

//Cach 2
int main()
{
	int i,n,tam,sl,max,kt;
	sl=1;kt=0;max=0;
	
	//Ham nhap mang
	cout <<"Hay nhap so phan tu cua mang "<<endl;
	cin >>n;
	for (i=1;i<=n;i++)
	{
		cout<<"Hay nhap phan tu thu "<<i<<" cua mang"<<endl;
		cin>>mang1[i];
	}
	
	
	//Ham sap xep
	while (kt==0)
	{
		kt=1;
		for(i=1;i<n;i++)
		{
			if (mang1[i]<mang1[i+1])
			{
				kt=0;
				int tam;
				tam=mang1[i+1];
				mang1[i+1]=mang1[i];
				mang1[i]=tam;
			}
		}
		
	}
	
	
	//Ham thao tac dem
	kt=0;
	for (i=1;i<n;i++)
	{
		tam=mang1[1];
		for (i=1;i<=n;i++)
		{
			if (mang1[i]==tam) 
			{
				kt++;
				if (kt>max) max=kt;
			}
			else
			{
				sl++;kt=1;
				tam=mang1[i];
			}
		}
	}
	
	
	//Xuat ket qua
	cout<<"Ket qua la :"<<endl;
	cout<<max<<" va "<<sl<<endl;
	return 0;
}
