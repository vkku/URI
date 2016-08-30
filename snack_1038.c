#include<stdio.h>
int main()
{
    int x,y;
    float cost = 0;
    scanf("%d %d",&x,&y);
    switch(x)
    {
        case    1   :   cost = y * 4;
                        break;
        case    2   :   cost = y * 4.5;
                        break;
        case    3   :   cost = y * 5;
                        break;
        case    4   :   cost = y * 2;
                        break;
        case    5   :   cost = y * 1.5;
                        break;
    }
    printf("Total: R$ %.2f\n",cost);
}
