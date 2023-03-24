#include <stdio.h>
int main(){
    int yr;
    char lp;
    printf("Enter year: ");
    fflush(stdin);
    scanf("%d",&yr);
    if(yr%4==0 && yr%100!=0 || yr%400==0){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}