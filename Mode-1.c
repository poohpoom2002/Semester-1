#include<stdio.h>
int main(){
    int mode[4], n[10], count=0, temp, num = 0, i, j;
    for(i = 0; i < 10; i++){
        scanf("%d",&n[i]);
    }
    for(i = 0; i < 9; i++){
        for(j = 0; j < 9-i; j++){
            if(n[j] > n[j+1]){
                temp = n[j];
                n[j] = n[j+1];
                n[j+1] = temp;
            }
        }
    }
    temp = 0;
    for(i = 1; i < 10; i++){
        if(n[i] == n[i-1]){
            temp++;
            if(n[i] != n[i+1] && temp >= count){
                if(count == 0){
                    count = temp;
                }
                if(temp > count){
                    num = 0;
                    for(j = 0; j < 4; j++){
                        mode[j] = 0;
                    }
                    mode[num] = n[i];
                }
                else{
                    mode[num] = n[i];
                    num++;
                }
                count = temp;
            }
            if(n[i] != n[i+1]){
                temp = 0;
            }
        }
    }
    for(i = 0; i < 4; i++){
        if(mode[i] != 0){
            printf("%d ",mode[i]);
        }
    }

    return 0;
}