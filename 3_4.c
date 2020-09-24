#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("coded by k1n9\n\n");
    double da[4],dmax,dmin;
    for (int i=0;i<4;i++)
    {
        printf("nhap so thu %d:",i+1);
        scanf("%lf",&da[i]);
    }
    for (int i=0;i<4;i++)
    {
        if(i==0)
        {
            dmax=da[i];
            dmin=da[i];
        }
        else
        {
            dmax=(dmax>da[i])?dmax:da[i];
            dmin=(dmin<da[i])?dmin:da[i];
        }
    }
    printf("gia tri cuc dai: %lf",dmax);
    printf("\ngia tri cuc tieu: %lf",dmin);
    getch();
}