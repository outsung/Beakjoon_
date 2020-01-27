#include <stdio.h>
#include <string.h>


int sum(int x){
    char x_str[5] = { 0 };

    int res = 0;

    sprintf(x_str, "%d", x);

    for(int i = 0; i < 5; i++){
        if(x_str[i] == 0){
            break;
        }
        res += (int)x_str[i] - 48;
    }

    return res;
}

int d(int n){        
    return n + sum(n);
}


int main(){

    int res_list[10000] = { 0 };

    for(int i = 1; i <= 10000; i++){
        res_list[i] = d(i);
    }

    int j = 0;
    for(int i = 0; i < 10000; i++){
        
        j = 0;
        for(; j < 10000; j++){
            if(i == res_list[j]){
                break;
            }
        }

        if(j == 10000)
            printf("%d\n", i);

    }


    return 0;
}

