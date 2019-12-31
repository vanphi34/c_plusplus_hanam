/// trong bài sử dụng cấu trúc dữ liệu vector và hàm so sánh có sẵn tuy nhiên khi làm bài tập ko dc áp dụng hàm và cấu trúc này nhé (chỉ để tham khảo thôi)
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector <int> dd;
    sort(a,a+n);        /// hàm so sánh anh viết vậy cho nhanh chứ muốn làm phải tự code hàm so sánh nhé !!!
    for(int i=0;i<n;i++){
        if(a[i]>=dd.size()){
            dd.push_back(a[i]);
        }
    }
    cout << dd.size();
    return 0;
}
