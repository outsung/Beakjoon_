#include <stdio.h>

int xinlist(int x, int *list){
    int i = 0;
    for(; i < 10; i++){
        
        if(x == list[i]){
            return 0;
        }
        if(list[i] == -1)
            break;
    }
    list[i] = x;
    return 1;
}


int main(){

    int input = 0;

    int res_list[10] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };

    int res = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &input);
        res += xinlist(input % 42, res_list) ? 1 : 0; 
    }

    printf("%d", res);

    return 0;
}