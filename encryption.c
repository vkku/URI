#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char plaintext[1000];
    int i = 0,j = 0,size = 0,iter = 0;
    scanf("%d",&iter);
    getchar();
    while(iter--)
    {
        //printf("\n");
        fgets(plaintext, sizeof(plaintext), stdin);
        //gets(plaintext);
        //printf("%s",plaintext);
        size = strlen(plaintext) - 1;
        for(i = 0 ; i < size ; i++)
        {
            //if((plaintext[i]>='A' && plaintext[i]<='Z') || (plaintext[i]>='a'&& plaintext[i]<='z'))
            if(isalpha(plaintext[i]))
                plaintext[i] += 3;
        }
        //printf("\nShift 3 : %s\n",plaintext);
        //printf("\nSize : %d",strlen(plaintext));
        for(i = size - 1 , j = 0 ; i >= size/2 ; i--)
        {
            int temp;
            temp = plaintext[i];
            plaintext[i] = plaintext[j];
            plaintext[j] = temp;
            j++;
        }
        //printf("\nReversed : %s\n",plaintext);
        for(i = (size)/2 ; i < size ; i++)
        {
            plaintext[i] -= 1;
        }
        printf("%s",plaintext); // ;-) Now ciphered
    }
    return 0;
}
