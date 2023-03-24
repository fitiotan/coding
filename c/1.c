#include <stdio.h>
int main(void){
int sum=0,number;
printf("Input the last number you want to add ...");
fflush(stdin);
scanf("%d",&number);
printf("1+2+3+.....+%d=",number);
next:
if(number){
 sum +=number--;
 goto next;
 }
 printf("%d\n\n",sum);
 return 0;
 }