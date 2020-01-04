#include <iostream>
using namespace std;
int main()
{
    int d,m,y;
    cout<<"Nhap theo thu tu ngay/thang/nam: "<<endl;
    cin>>d>>m>>y;
    if( m>=12 || m<1 )
    {
        cout<<"False!";
        return 0;
    }
    if(m%2!=0)
    {
        if(d>=1 && d<=31)
        {
            cout<<"True!";
            return 0;
        }
        else
        {
            cout<<"False!";
            return 0;
        }
    }
    if(m==2)
    {
        if ((y%100)%4==0)
            if(d>=1 && d<=29)
            {
                cout<<"True!";
                return 0;
            }
            else
            {
                cout<<"False!";
                return 0;
            }
        if((y%100)%4!=0)
            if(d>=1 && d<=28)
            {
                cout<<"True!";
                return 0;
            }
            else
            {
                cout<<"False!";
                return 0;
            }

    }
    if(m!=2 && m%2==0)
    {
        if(d>=1 && d<=30)
        {
            cout<<"True!";
            return 0;
        }
        else
        {
            cout<<"False!";
            return 0;
        }
    }
    return 0;
}
