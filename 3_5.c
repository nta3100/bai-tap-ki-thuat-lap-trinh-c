#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("coded by k1n9\n");
    int ia;
    printf("nhap so can kiem tra: ");
    scanf("%d",&ia);
    if(ia<2)
    {
        printf("so %d khong phai so nguyen to.",ia);
    }
    else
    {
        for(int i=2;i<sqrt(ia);i++)
        {
            if(ia%i==0)
            {
                printf("so %d khong phai so nguyen to.",ia);
                goto khongphaisonguyento;
            }
        }
        printf("so %d la so nguyen to.",ia);
    }
    khongphaisonguyento:;
}