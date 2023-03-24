#include <stdio.h>
int main(void){
    short hour,minute,second;
    char flag;
    printf("Input a hour:minute:second short integer number(seperated by :)\n");
    fflush(stdin);
    scanf("%hd:%hd:%hd",&hour,&minute,&second);
    flag=(hour >12) ? 'P' :'A';
    hour=(hour >12) ? (hour-12) : hour;
    printf("\nThe time now is %cM : %hd oclock: %hd minutes :%hd seconds\n",flag,hour,minute,second);
return 0;
}