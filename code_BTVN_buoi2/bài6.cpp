#include <iostream>
using namespace std;
int main()
{
    int d,m,y;
    cout<<"Nhap theo thu tu ngay/thang/nam: "<<endl;
    cin>>d>>m>>y;
    if( y%4==0 && y % 100 != 0 || y % 400 == 0 ){
        if(m<1 ||m>12){
                cout<<"false";
            return 0;
        }
        else{
            if(m==1 || m==3 ||m==5 || m==7 || m==8 || m==10 || m==12){
                if(d>31 ||d<1){
                    cout<< "false";
                    return 0;
                }
            }
            else if(m==2){
                if(d<1 ||d>29){
                cout<< "false";
                return 0;
            }
            }
            else {
                if(d>30 || d<1){
                    cout<< "false";
                    return 0;
                }
            }
        }


    }
    else{
        if(m>12 || m<1){
            cout<< "false";
            return 0;
        }
        else{
            if(m==1 || m==3 ||m==5 || m==7 || m==8 || m==10 || m==12){
                if(d>31 ||d<1){
                    cout<< "false";
                    return 0;
                }
            }
            else if(m==2){
                if(d>28 || d<1){
                    cout<< "false";
                    return 0;
                }
            }
            else {
                if(d>30 || d<1){
                    cout<< "false";
                    return 0;
                }
            }
        }
    }
    cout<< "true";
    return 0;
}
