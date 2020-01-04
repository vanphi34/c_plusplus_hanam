#include <iostream>
using namespace std;
const int MAX = 1e6;
int cnt[MAX];
 
int main()
{
    int n;
    do{
        cout << "\nNhap n = ";
        cin >> n;
    }while(n < 1);
    int a[n];
    for(int i = 0; i < n;i++){
        do{
            cout << "\nNhap a[" << i << "] = ";
            cin >> a[i];
        }while(a[i] < 0);
    }
    for(int i = 0;i < MAX; i++) cnt[i] = 0;
    for(int i = 0; i < n;i++){
        cnt[a[i]]++;
    }
    for(int i = 0;i < MAX; i++){
        if(cnt[i] > 0){
            cout << "thap thu " << i << "co chieu dai la  " << cnt[i] << " !\n";
        }
    }
    int i = 0, max = 0,index = 0;
	int frequency;
	while(i < n)	{
 
		frequency = 1;
 
		while(a[i] == a[i+1])	{
 
			frequency++;
			i++;
		}
 
		if(max < frequency)	{
 
			max = frequency;
			index = i;
		}
 
		i++;
	}
 
	cout << "thap cao nhat la thap thu: " << a[index] << endl;

     return 0;
}



