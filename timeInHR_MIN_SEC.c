#include <stdio.h>

int main() {

    int time;
    int hour,min,sec;
    scanf("%d",&time);
    hour = time / 3600;
    time %= 3600;
    min = time/60;
    time %= 60;
    sec = time;
    //hour = min / 60;
    printf("%d:%d:%d\n",hour,min,sec);
    return 0;
}
