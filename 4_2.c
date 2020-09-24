#include <stdio.h>
#include <stdlib.h>
#define size 15

int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(j<(size/2-i+1)||j>(size/2+i-1))
            {
                putchar('*');
            }
            else
            {
                putchar(' ');
            }
        }
        putchar('\n');
    }
    for(int j=0;j<size;j++)
    {
        putchar('*');
    }
    getch();
}