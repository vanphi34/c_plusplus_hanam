#include <bits/stdc++.h>
using namespace std;
int manga[30000],mangb[3000],manga1[5000];

void Sapxep(int mang1[],int l1,int r1)//Ham sap xep
{
    if (l1<=r1)
    {
        int mid=mang1[(l1+r1)/2];
        int i1=l1;
        int j1=r1;
        while (i1<=j1)
        {
            while (mang1[i1] < mid)
                i1++;
            while (mang1[j1] > mid)
                j1--;
            if (i1 <= j1)
            {
                swap(mang1[i1],mang1[j1]);
                i1++;
                j1--;
            }
        }
        if (l1<j1)
            Sapxep(mang1,l1,j1);
        if (r1>i1)
            Sapxep(mang1,i1,r1);
    }
}

void Duplicate(int mang21[],int mang22[], int n2) //Ham nhan doi (eg:123-->123123)
{
    int i2,tam,dem;
    tam=1;
    for ( dem =1;dem<=2;dem++)
    for (i2=1;i2<=n2;i2++)
    {
        mang22[tam]=mang21[i2];
        tam++;
    }

}

int Hieu(int n31,int n32,int n33) //Ham tinh hieu
{
    if ((n31-n32)<0)
    {
        return ((n31+n33)-n32);
    }
    return(n31-n32);
}

int main()
{
    int i,n,m,x,kq,min;
    cin>>n>>m;

    //*****
    for (i=1; i<=n;i++) //Nhap mang a
    {
        cin>>manga[i];
    }

    //*****
    for (i=1;i<=n;i++) //Nap mang b
    {
        cin>>mangb[i];
    }

    //*****
    int tam;
    for (i=1;i<=n;i++)
    {
        tam=manga[i]%m;
        manga[i]=tam;
    } //Dua mang a ve gia tri chia lay du cho m

    //*******
    Sapxep(manga,1,n);//Sap xep mang a
    Sapxep(mangb,1,n);//Sap xep mang b

    //*****
    Duplicate(manga,manga1,n);//Nhan doi mang a

    //*******
    //Khu vuc thao tac chinh
    int kt=0;min=0;
    for (i=1;i<=n;i++)
    {
        kq=1;
        int t1=Hieu(mangb[1],manga1[i],m);
        for (int it=1;it<n;it++)
        {
            if (Hieu(mangb[1+it],manga1[i+it],m)==t1)
            kq=kq*1;
            else
                kq=kq*0;
        }


        if (kq==1)
        {
            if (kt==0)
            {
                min=t1;
                kt=1;
            } else
                if (t1 < min)
                    min=t1;
        }
    }


    cout<<endl;
    cout<<min;//In ra ket qua
    return 0;
}