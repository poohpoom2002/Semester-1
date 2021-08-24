#include<stdio.h>
int main(){
    int i,n,arr[8];
    scanf("%d",&n);
    for(i=7;i>=0;i--){
        arr[i]=n%2;
        n/=2;
    }
    for(i=0;i<8;i++){
        printf("%d",arr[i]);
    }

    return 0;
}