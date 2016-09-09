#include<stdio.h>
#include<stdlib.h>
int main()
{
    double a, b, c;
    double g1, g2, g3;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a > b)
    {
        if(a > c)
        {
            if(b > c)
            {
                g1 = a;
                g2 = b;
                g3 = c;
            }
            else
            {
                g1 = a;
                g2 = c;
                g3 = b;
            }
        }
        else
        {
            g1 = c;
            g2 = a;
            g3 = b;
        }
    }
    else if(b > c)
    {
        if(a > c)
        {
             g1 = b;
             g2 = a;
             g3 = c;
        }
        else
        {
            g1 = b;
            g2 = c;
            g3 = a;
        }
    }
    else
    {
        g1 = c;
        g2 = b;
        g3 = a;
    }
    printf("%f\n%f\n%f\n",g1,g2,g3);    //Check Order

    if(g1 >= g2 + g3)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    if((g1 * g1) == (g2 * g2) + (g3 * g3))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    if((g1 * g1) > ((g2 * g2) + (g3 * g3)))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if((g1 * g1) < (g2 * g2) + (g3 * g3))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if((abs(g1 - g2) < 0.001 ) && ((abs(g2 - g3) < 0.001)))
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if((abs(g1 - g2) < 0.001 ) && (abs(g3 - g1) > 0.001 ) )
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    if((abs(g2 - g3) < 0.001) && (abs(g1 - g2) > 0.001))
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    if((abs(g3 - g1) < 0.001) && (abs(g2 - g3) > 0.001))
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
