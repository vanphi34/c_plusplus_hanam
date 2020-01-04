#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
int x,y,z,chuvi,dientich; 
 cout << "Nhap ba so nguyen : " << endl;
 cin>>x>>y>>z;
if(x+y>z&&x+z>y&&y+z>x)
{
     cout << "They could be 3 sides of a triangle" << endl;
}
else
{
    cout << "They could not be 3 sides of a triangle" << endl;
}
    return 0;
}

