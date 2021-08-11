#include<stdio.h>
int main(){
    int n[3],sum=99999;
    for(int i=0;i<3;i++){
        scanf("%d",&n[i]);
    }
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(n[i]+n[j]<sum){
                sum=n[i]+n[j];
            }
        }
    }
    printf("%d",sum);

    return 0;
}