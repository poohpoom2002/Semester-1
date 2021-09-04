#include<stdio.h>
int main(){
    int i,n[10],sum=0;
    for(i=0;i<10;i++){
        scanf("%d",&n[i]);
        sum+=n[i];
    }
    for(i=0;i<10;i++){
        printf("%d ",n[i]);
    }
    printf("\n");
    printf("%d",sum/10);

    return 0;
}