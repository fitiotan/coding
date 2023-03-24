#include <stdio.h>
int main(void){
    short data;
    printf("Input a short integer (-32768~32767)...");
    fflush(stdin);
    scanf("%hd",&data);
    if(data >99 && data <201){
        printf("%hd is between 100~200\n",data);
    }else{
        printf("\7\7");
        printf("%hd is not between 100~200\n",data);
    }
return 0;
}