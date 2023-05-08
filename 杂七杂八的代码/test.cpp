#include<stdio.h>

 int main(){
    int i = 1;
    int result = 1;
        int n =0;
        int temp = 3;
    while (i < 19){
        if(i == 1){
            i++;
            continue;
        }
        for(n = 0; n < i - 1; n++){
            temp *= 3;          
        }
        if(i % 2 == 0){
            result -= (temp / (2 * i - 1));
        }
        else{
            result += (temp / (2 * i - 1));
        }
        i++;
    }
    printf("%.5d", result);
    return 0;
    
} 

