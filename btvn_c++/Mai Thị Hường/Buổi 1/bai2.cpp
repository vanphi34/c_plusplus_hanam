#include <iostream>
#include <iomanip>

using namespace std;

void taohinhtamgiacvuongcan (int h)
{
    for (int i = 0; i <= h; i++)
    {
        if(i%2 == 0)
        {
           for (int y = 0; y <= i; y++)
           {
            cout << "*";
           }
        }
        else
            cout << setw(100)<< " " << endl;
    }
}


int main()
{
    int h;
    cout << "Nhap gia tri cua h: ";
    cin >> h;
    taohinhtamgiacvuongcan (h);
    return 0;
}
