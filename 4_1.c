#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define size 6

int main()
{
    printf("coded by k1n9\n");
    int matran[size][size];
    printf("chuong trinh nhap ma tran %dx%d:\n",size,size);
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            printf("Nhap phan tu hang %d cot %d:",i+1,j+1);
            scanf("%d",&matran[i][j]);
        }
    }
    printf("Ma tran ban vua nhap la:\n");
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            printf("%5d",matran[i][j]);
        }
        printf("\n");
    }
}