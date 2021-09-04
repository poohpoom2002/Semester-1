#include<stdio.h>
int Mean(int n[10]){
    int sum=0;
    for(int i=0;i<10;i++){
        sum+=n[i];
    }
    return sum/10;
}
int main(){
    int n[10],i;
    for(i=0;i<10;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<10;i++){
        printf("%d ",n[i]);
    }
    printf("\n");
    printf("%d",Mean(n));

    return 0;
}