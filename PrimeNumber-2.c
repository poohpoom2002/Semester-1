#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(n%i==0 && i!=n){
            printf("This number is not a prime number.");
            break;
        }
    }
    if(i>n){
        printf("This number is a prime number.");
    }

    return 0;
}