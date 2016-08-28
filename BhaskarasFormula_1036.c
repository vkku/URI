#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    int flag = 0;
    float det = 0, r1 = 0, r2 = 0;
    fflush(stdin);
    scanf("%f%f%f",&a,&b,&c);
    det = (b * b) - (4 * a * c);
    if(det < 0)
        flag = 1;
    else if(2 * a == 0)
        flag = 1;
    else
    {
        r1 = ( -b + sqrt(det) ) / (2 * a);
        r2 = ( -b - sqrt(det) ) / (2 * a);
    }
    if(flag == 1)
    {
        printf("Impossivel calcular\n");
        flag = 0;
    }
    else
    {
        printf("R1 = %.5f\n",r1);
        printf("R2 = %.5f\n",r2);
    }
    return 0;
}
