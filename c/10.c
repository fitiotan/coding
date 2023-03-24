#include <stdio.h>
int main(void){
    unsigned short i,end;
    unsigned int sum=0;
    printf("Input a end integer number (0~32767) ...");
    fflush(stdin);
    scanf("%hu",&end);
//# 1
    i=1;
    do{
        sum+=i++;
    }
    while(i <=end);
    printf("The sum of 1+2+.....+%hu=%u\n\n",end,sum);
    //#2
    sum=0;
    printf("The sum of 1+2+.....+%hu=",end);
    do{
        sum+=end--;
    }
    while(end);
    printf("%u\n\n",sum);
    return 0;
}
