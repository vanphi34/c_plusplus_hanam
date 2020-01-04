#include<stdio.h>

#include<conio.h>

#include<math.h>

 int main()

{float a,b,c,p,s;

int deu,vuong,can;

printf("Nhap cac so thuc a, b, c : "); scanf("%f%f%f",&a,&b,&c);

if (a+b>c&&a+c>b&&b+c>a)

{printf("They could be 3 sides of a triangle ");

deu=(a==b)&&(b==c);

vuong=(a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a);

can=(a==b)||(a==c)||(b==c);

if(deu)printf(" deu\n");

else if(vuong&&can)printf(" vuong can\n");

     else if(vuong)printf(" vuong\n");

          else if(can)printf(" can\n");

               else printf(" thuong\n");

p=(a+b+c)/2;

printf("Chu vi = %4.2f, Dien tich = %4.2f",2*p,sqrt(p*(p-a)*(p-b)*(p-c)));

}else printf("They could not be 3 sides of a triangle\n");

getch();

}
