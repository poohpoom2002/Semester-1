#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==1){
        printf("This number is a prime number.");
    }
    else{
        printf("This number is not a prime number.");
    }
    
    return 0;
}