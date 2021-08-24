#include<stdio.h>
int main(){
    int arr[10],i;
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<9;i++){
        if(arr[i-1]%2!=0 && arr[i+1]%2!=0){
            printf("%d ",arr[i]);
        }
    }

    return 0;
}