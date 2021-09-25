#include<stdio.h>
int main(){
    int m, n, i, x;
    scanf("%d %d",&m ,&n);
    int matrix_1[m*n], matrix_2[m*n];
    for(i = 0; i < m*n; i++){
        scanf("%d",&matrix_1[i]);
    }
    for(i = 0; i < m*n; i++){
        scanf("%d",&matrix_2[i]);
    }
    for(i = 0; i < m*n; i++){
        printf("%d ",matrix_1[i] + matrix_2[i]);
        if(i % n == 2){
            printf("\n");
        }
    }

    return 0;
}