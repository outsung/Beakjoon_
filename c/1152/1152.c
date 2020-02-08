#include <stdio.h>

int main(){

    char input_str[1000000] = {};

    int res = 0;
    for(;EOF != scanf(" %s", input_str);){
        if(input_str == " "){
            continue;
        }
        res++;
    }

    printf("%d", res);

    return 0;
}

