#include<stdio.h>
int is_prime(int a){
    for(int i = 2; i < a ; i++){
        if (a%i == 0){
            return 0;
        }
    }
    if (a == 1){
        return 0;
    }
    return 1;
}
int main(){
    int a;
    scanf("%d", &a);
    for(int i = 1;i < a;i++){
        if (is_prime(i)){
            printf("%d ", i);
        }
    }
    return 0;
}