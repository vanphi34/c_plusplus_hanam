#include <iostream>

using namespace std;

int main()
{
    int a;
    do
    {
        cout << "Nhap so tien phai tra:"; cin >>a;
        if( a<0 ) cout << "So tien phai tra phai co gia tri duong."
    } while ( a<0 )
    if(a>300) a=a*70/100;
    else if(a>=200) a=a*80/100;
    cout <<"So tien phai tra sau khi tru khuyen mai:"<<a;
    return 0;
}
