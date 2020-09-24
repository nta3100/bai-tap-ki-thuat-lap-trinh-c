#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("coded by k1n9\n");
    float fpt[6],fd,fdx,fdy;
    char cpt[]={'a','b','c','d','e','f'};
    printf("chuong trinh giai he phuong trinh:\nax+by=c\ndx+ey=f\n");
    for(int i=0;i<6;i++)
    {
        printf("nhap %c=",cpt[i]);
        scanf("%f",&fpt[i]);
    }
    fd=fpt[0]*fpt[4]-fpt[1]*fpt[3];
    fdx=fpt[2]*fpt[4]-fpt[1]*fpt[5];
    fdy=fpt[0]*fpt[5]-fpt[2]*fpt[3];
    for(int i=0;i<6;i++)
    {
        printf("%10f",fpt[i]);
        if(i==0||i==3)
        {
            printf("+");
        }
        else if(i==1||i==4)
        {
            printf("=");
        }
        else if(i==2||i==5)
        {
            printf("\n");
        }
    }
    if(fd)
    {
        printf("x=%10f",fdx/fd);
        printf("\ny=%10f",fdy/fd);
    }
    else if(fdx==0&&fdy==0)
    {
        printf("He pt co vo so nghiem");
    }
    else
    {
        printf("He pt vo nghiem");
    }
    getch();
}