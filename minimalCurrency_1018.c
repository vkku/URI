#include <stdio.h>
#include<math.h>

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    float money;
    float coins;
    int num;
    scanf("%5f",&money);
    num = (int)money;
    coins = money - num;
    //coins = ( (coins + 1) * 100) - 100;
    printf("Int denomination : %d\n",num);
    printf("Coin denomination : %f\n",coins);
    printf("NOTAS:\n");
    //printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00",num%100,num%50,num%20,num%10,num%5,num%2,num);
    printf("%d nota(s) de R$ 100.00\n",num/100);
    num = fmod(num, 100.00);
    printf("%d nota(s) de R$ 50.00\n",num/50);
    num = fmod(num, 50.00);
    printf("%d nota(s) de R$ 20.00\n",num/20);
    num = fmod(num, 20.00);
    printf("%d nota(s) de R$ 10.00\n",num/10);
    num = fmod(num, 10.00);
    printf("%d nota(s) de R$ 5.00\n",num/5);
    num = fmod(num, 5.00);
    printf("%d nota(s) de R$ 2.00\n",num/2);
    num = fmod(num, 2.00);
    printf("MOEDAS:\n");
    //coins = fmod(coins, 1.00);
    printf("%d moeda(s) de R$ 1.00\n",num);
    printf("%.0f moeda(s) de R$ 0.50\n",coins/0.50);
    coins = fmod(coins, 0.50);
    printf("%.0f moeda(s) de R$ 0.25\n",coins)/0.25;
    coins = fmod(coins, 0.25);
    printf("%.0f moeda(s) de R$ 0.10\n",coins/0.10);
    coins = fmod(coins, 0.10);
    printf("%.0f moeda(s) de R$ 0.05\n",coins/0.05);
    coins = fmod(coins, 0.05);
    printf("%.0f moeda(s) de R$ 0.01\n",coins);
    coins = fmod(coins, 0.01);
    return 0;
}
/*
1.00
1 moeda(s) de
0 moeda(s) de R$ 0.25
2 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
3 moeda(s) de R$ 0.01
*/
