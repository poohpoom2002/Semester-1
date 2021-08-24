#include<stdio.h>
int main(){
    int arr[10],i;
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0 && arr[i-2]%2!=0){
            printf("%d ",arr[i-1]);
        }
    }

    return 0;
}