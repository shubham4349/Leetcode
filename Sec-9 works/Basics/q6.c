// switch case 
#include<stdio.h>

int main(){
    for(int i = 1 ; i<=25; i++){
        switch(i){      
            case 0: i+=5;
            case 1: i+=3; 
            case 2: i+=4;
            default: i+=5;
            break;
        }
        printf("%d\n",i);
    }
    return 0;
}
// i-= --j