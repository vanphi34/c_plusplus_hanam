#include <iostream>

using namespace std;

int main()
{
    int d,m,y;
    cout << "Nhap so ngay:"; cin >> d;

    cout << "Nhap so thang:"; cin >> m;

    cout << "Nhap so nam:"; cin >> y;

    //cout << "Ngay " << d << " Thang " << m << " Nam " << y;

    if(d>31 || d<1 || m<1 || m>12 ) cout << "Flase";
    else
    {
        if( m == 4 || m==6  || m== 9 || m==11 )
        {
            if (d == 31) cout << "Flase";
            else  ( d<31 ); cout << " True";
        }
        if ( m==2 )
            {
                if( d == 29 )
                {
                    if( y%4==0 && y%100 ==0 && y%400 !=0 ) cout << "False";

                    else if( y%4!=0 ) cout <<"False";

                    else cout << "6True";
                }
            else if( d < 29) cout << "True";
            }
        else cout << " True";
    }
    return 0;
}
