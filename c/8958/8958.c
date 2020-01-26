#include <stdio.h>
#include <stdlib.h>

int sum(char *list){
    
    int res = 0;

    int point = 1;
    for(int i = 0; i < strlen(list); i++){
        
        if(list[i] == 'O'){
            res += point; 
            point++;
        }
        else if(list[i] == 'X'){
            point = 1;
        }
    }

    return res;
}


int main(){

    int t = 0;

    char input_list[81] = { 0 };

    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%s", &input_list);
        printf("%d\n", sum(input_list));
    }

    return 0;
}