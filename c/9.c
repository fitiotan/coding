#include <stdio.h>
int main(){
    char operators;
    printf("Excute many kind of operation of 60 and 20 :\n\n");
    printf(" 1 representative +\n");
    printf(" 2 representative -\n");
    printf(" 3 representative *\n");
    printf(" 4 representative /\n");
    printf(" 5 representative %%\n\n");
    printf("Input a number (1~5) to process operation\n");
    fflush(stdin);
    scanf("%c",&operators);
    if((operators <'1')||(operators >'5')){
        printf("operators out of range (1~5) !! \7\7\7\n\n");
    }else if(operators =='1'){
        printf("60+20=%hd\n\n",60+20);
    }else if(operators =='2'){
        printf("60-20=%hd\n\n",60-20);
    }else if(operators =='3'){
        printf("60*20=%hd\n\n",60*20);
    }else if(operators =='4'){
        printf("60//20=%hd\n\n",60/20);
    }else if(operators =='5'){
        printf("60%%20=%hd\n\n",60%20);
    }
return 0;
}