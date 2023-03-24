#include <stdio.h>
 int main(void){
 double data;
 printf("Input a double precision float number ...");
 fflush(stdin);
 scanf("%lf",&data);
 if(data<0){
 data= -data;
 }
 printf("The absolute data of your input is %lf=",data);
 return 0;
 }