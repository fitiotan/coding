#include <stdio.h>
int main(void){
    short level,i,j;
    printf("Input the display level number: ");
    fflush(stdin);
    scanf("%hd",&level);
    putchar('\n');
    for(i=1;i<=level;i++){
        for(j=0;j<(level-i);j++){
            printf(" ");
        }
        for(j=0;j<i;j++){
            printf("*");
        }
                putchar('\n');
        }
        putchar('\n');
    return 0;
}