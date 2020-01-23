#include <stdio.h>

int add(x){
    
    int num_1 = x % 10;
    
    int num_10 = x >= 10 ? (x - num_1) / 10 : 0;

    return num_1 + num_10;
}

int main(){

    int input_a = 0;


    int temp = 0;
    int temp_ = 0;

    int res = 1;
    

    scanf("%d", &input_a);
    temp = input_a;
    while(1){

        temp_ = add(temp);

        temp_ = (temp % 10) * 10 + (temp_ % 10);

        if(input_a == temp_)
            break;

        temp = temp_;
        res++;
    }

    printf("%d", res);
    
    return 0;
}
