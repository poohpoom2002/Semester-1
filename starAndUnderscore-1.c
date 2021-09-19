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
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= num; j++){
            if(j == ((n + 1) / 2) + count || j == ((n + 1) / 2) - count){
                printf("*");
            }
            else{
                printf("_");
            }
        }
        printf("\n");
        if(n % 2 == 0){
            if(i < n/2){
                count++;
            }
            else if(i > n/2){
                count--;
            }
        }
        else{
            if(i <= n/2){
                count++;
            }
            else if(i > n/2){
                count--;
            }
        }
    }

    return 0;
}