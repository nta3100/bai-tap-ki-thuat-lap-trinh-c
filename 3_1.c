#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double da,db,dc,dd;
    printf("coded by k1n9\n\n");
    printf("Chuong trinh giai phuong trinh bac 2:\n");
    printf("a*x^2+b*x+c=0\n");
    printf("a = ");
    scanf("%lf",&da);
    printf("b = ");
    scanf("%lf",&db);
    printf("c = ");
    scanf("%lf",&dc);
    dd=db*db-4*da*dc;
    if(dd<0) printf("Phuong trinh vo nghiem");
    else if(dd==0) printf("Phuong trinh co nghiem kep: x1=x2=%lf",-db/(2*da));
    else if(dd>0) printf("Phuong trinh co 2 nghiem phan biet:\nx1=%lf\nx2=%lf",(-db-sqrt(dd))/(2*da),(-db+sqrt(dd))/(2*da));
    getch();
}