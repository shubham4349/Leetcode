#include<stdio.h>

int main(){
   static  int var = 5;
    if(var--){
        main();
        printf("%d",var);
    }
    return 0;
}