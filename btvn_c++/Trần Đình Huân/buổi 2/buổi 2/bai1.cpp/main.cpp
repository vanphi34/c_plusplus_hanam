#include <iostream>

using namespace std;

int main()
{
    float n;
    cout << "nhap so tien n= ";
    do{
		cin >> n;
		if(n<=0){
			cout << "so tien khong hop le, vui long nhap lai n= ";
		}
    }while(n<=0);
    if(n>=200&&n<300){
		cout << "quy khach duoc khuyen mai 20%, so tien phai tra la: " <<n*80/100;
    }
    else if(n>300){
		cout << "quy khach duoc khuyen mai 30%, so tien phai tra la: " <<n*70/100;
    }
    else{
		cout << "khong co khuyen mai, so tien phai tra la: " <<n;
    }
    return 0;

}
