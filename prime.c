#include<stdio.h>
void prime(int n);
int isPrime(int n);
int arr[120000] = {0};
int main()
{
    int n ,i,sum = 2,count = 0;
    /*
    prime(20);
    for(i = 0 ; i < n ; i++)
        printf("%3d",arr[i]);
    */
    scanf("%d",&n);
    prime(n);
    i = 1;
    while(arr[i] <= n)
    {
        //printf("%d",arr[i]);
        sum += arr[i];
        if(isPrime(sum) && sum < n)
        {
            //printf("%d\n",sum);
            count++;
        }

        i++;
    }
    printf("%d\n",count);
    return 0;
}

void prime(int n)
{
    int count = 0;
    int i = 2, j = 0, flag = 0;
    for(i = 2 ; i < n ; i++)
    {
        for(j = 2 ; j < i ; j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(j == i)
        {
            arr[count++] = i;
        }
    }
}

int isPrime(int n)
{
    int i = 2;
    for(i = 2 ; i < n ; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    if(i == n)
    {
        return 1;
    }
}
