#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ca;
    ngonngulaptrinh:
    do
    {
        printf("ngon ngu lap trinh\n");
    } while (kbhit()==0);
    ca=getch();
    if(ca=='c')
    {
        printf("turbo c");
    }
    else if(ca=='p')
    {
        printf("turbo pascal");
    }
    else
    {
        goto ngonngulaptrinh;
    }
    getch();
}