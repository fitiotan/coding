#include <stdio.h>
int main(void){
    double data;
    printf("Input a double precision float number ...");
    fflush(stdin);
    scanf("%lf",&data);
    if(data<0){
        printf("The data=%lf is negative\n",data);
    }else{
        printf("The data=%lf is positive\n",data);
    }
    return 0;
}