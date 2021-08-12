#include<stdio.h>
int main(){
    int n,count=0;
    do{
        scanf("%d",&n);
        if(n==-99){
            break;
        }
        for(int i=2;i<=n;i++){
           if(n%i==0){
               count++;
            }
        }
       if(count==1){
           printf("This number is a prime number.\n");
        }
       else{
           printf("This number is not a prime number.\n");
        }
        count=0;
    }
    while(n!=-99);

    return 0;
}