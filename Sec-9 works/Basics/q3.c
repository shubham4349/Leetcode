#include<stdio.h>

void main(){
    
    int i = 1;
    do{
        while(i++<1); //2 // 3
    }while(i++<=2); 
    printf("%d",i);
}