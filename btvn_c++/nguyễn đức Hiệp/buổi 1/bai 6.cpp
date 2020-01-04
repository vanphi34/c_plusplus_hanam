#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
int x,y,tong,hieu,tich,thuong,chiadu; 
 cout << "Nhap hai so nguyen : " << endl;
 cin>>x>>y;
  tong=x+y;
  hieu=x-y;
  tich=x*y;
  thuong=x/y;
  chiadu=x%y;
 cout << "tong" << x << " va " << y << " la " << tong << "." << endl;
 cout << "hieu " << x <<  " va " << y << " la " << hieu << "." << endl;
 cout << "tich" << x << " va " << y << " la " << tich << "." << endl;
 cout << "thuong" << x << " va " << y << " la " << thuong << "." << endl;
 cout << "chiadu" << x << " va " << y << " la " << chiadu << "." << endl;
    return 0;
}
