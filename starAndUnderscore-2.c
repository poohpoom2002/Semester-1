#include<stdio.h>
int main(){
    int n, num, count = 0;
    scanf("%d",&n);
    if(n % 2 == 0){
        num = n-1;
    }
    else{
        num = n;
    }
    for(int i = 1; i <= (n + 1) / 2; i++){
        for(int j = 1; j <= num; j++){
            if(j == ((n + 1) / 2) + count || j == ((n + 1) / 2) - count){
                printf("*");
            }
            else{
                printf("_");
            }
        }
        printf("\n");
        count++;
    }
    count--;
    if(n % 2 != 0){
        count--;
    }
    for(int i = 1; i <= n / 2; i++){
        for(int j = 1; j <= num; j++){
            if(j == ((n + 1) / 2) + count || j == ((n + 1) / 2) - count){
                printf("*");
            }
            else{
                printf("_");
            }
        }
        printf("\n");
        count--;
    }

    return 0;
}