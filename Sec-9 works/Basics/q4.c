#include<stdio.h>

int main(){
    static int var = 5;
    if(var){
        printf("%d",var--); // 5
      //  printf("%d",var--);// 4
        main();

    }
    return 0;
}