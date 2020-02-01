#include <stdio.h>

int findStr(char *str, char s){
    for(int i = 0; ; i++){
        if(str[i] == NULL)
            return -1;
        if(str[i] == s)
            return i;
    }
    
}

int main(){

    char input_s[100] = { 0 };

    scanf("%s", input_s);

    for(char j = 'a'; j <= 'z'; j++){
        printf("%d ", findStr(input_s, j));
    }

    return 0;
}

