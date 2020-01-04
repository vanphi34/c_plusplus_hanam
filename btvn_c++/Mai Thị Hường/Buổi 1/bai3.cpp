#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    int h;
    cout << "Nhap h" << endl;
    cin >> h;

    while(h<2)
    {
        cout << "Nhap lai gia tri h lon hon 2";
        cin >> h;
    }

    for (int i=0; i<h; i++)
    {
        for (int y = -h+1; y<h; y++)
        {
            if(y>=-i && y<=i)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout <<endl;
    }


    for (int i=0; i<h; i++)
    {
        for (int y = -h+1; y<h; y++)
        {
            if(y>=-i && y<=i)
            {
                cout << "*";
            }
            else
                {
                    if (y>= -1 && y<= 1)
                        cout << "*";
                    else
                        cout << " ";
                }
        }
        cout <<endl;
    }

    for (int i =0; i<4; i++)
        cout << setw(h+1)<< "***"<< endl;

    return 0;
}
