#include <stdio.h>
int main(void){
    double score;
    char grade;
    printf("Input a score ...");
    fflush(stdin);
    scanf("%lf",&score);
    grade= score >=80.00 ? 'A' :
        (score >=70.00 ? 'B' :
        (score >=60.00 ? 'C' :'D')
        );
    printf("\nYour grade is %c\n",grade);
    return 0;
}