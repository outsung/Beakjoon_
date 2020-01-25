#include <stdio.h>

int main(){

    int input = 0;
    
    
    int res = -1;
    int res_i = -1;


    for(int i = 0; i < 9; i++){
        scanf("%d",&input);
        if(res < input){
            res = input;
            res_i = i;
        }
    }

    printf("%d\n%d", res, res_i + 1);

    return 0;
}