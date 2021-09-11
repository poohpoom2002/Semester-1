#include<stdio.h>
int main(){
    int i, j, n[10], count[10], maxValue = 0;
    for(i = 0; i < 10; i++){
        scanf("%d",&n[i]);
        count[i] = 0;
    }
    for(i = 0; i < 10; i++){
        for(j = i; j < 10; j++){
            if(n[i] == n[j]){
                count[i]++;
            }
        }
        if(count[i] > maxValue){
            maxValue = count[i];
        }
    }
    for(i = 0; i < 10; i++){
        for(j = i-1; j >= 0; j--){
            if(n[i] == n[j]){
                break;
            }
        }
        if(count[i] == maxValue && j == -1){
                printf("%d ",n[i]);
            }
    }

    return 0;
}