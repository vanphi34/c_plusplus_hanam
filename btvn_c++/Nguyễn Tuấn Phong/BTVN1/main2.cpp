#include<conio.h>
#include<stdio.h>
int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    for(;n<=0;)
    {
        printf("Phai nhap n > 0 \nNhap lai n: ");
        scanf("%d",&n);
    }
    for(int i = 1; i <= n; i++)
    {
        for(int k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
