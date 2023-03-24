#include <stdio.h>
int main(void){
    short level,i,j;
    printf("Input the display level number : ");
    fflush(stdin);
    scanf("%hd",&level);
    putchar('\n');
    for(i=1;(2*i-1)<=level;i++){
        for(j=0;j<(level-i);j++){
            printf(" ");
        }
        for(j=0;j<(2*i-1);j++){
            printf("*");
        }
            putchar('\n');
        }
        putchar('\n');
    return 0;
}