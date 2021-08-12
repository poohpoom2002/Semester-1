#include<stdio.h>
int main(){
    int n,i;
    do{
        scanf("%d",&n);
        if(n==-99){
            break;
        }
        for(i=2;i<=n;i++){
            if(n%i==0 && i!=n){
                printf("This number is not a prime number.\n");
                break;
            }
        }
        if(n==1){
            printf("This number is not a prime number.\n");
        }
        else if(i>n){
            printf("This number is a prime number.\n");
        }
    }
    while(n!=-99);
    
    return 0;
}
