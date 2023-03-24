#include <stdio.h>
int main(void){
    float data1,data2,temp;
    printf("Input 2 float numbers separated by a space ...");
    fflush(stdin);
    scanf("%f %f",&data1, &data2);
    if(data1 < data2){
        temp=data1;
        data1=data2;
        data2=temp;
    }
    printf("The larger number is %.2f\n",data1);
    printf("The smaller number is %.2f\n",data2);
    return 0;
}