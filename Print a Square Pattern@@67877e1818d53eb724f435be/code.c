#include<stdio.h>
int main (){
    int rows,cols;
    scanf("%d%d",&rows,&cols);
    for(int i=0; i<=rows;i++){
        for (int j=0;j<=cols;J++){
            printf("*");
        }
        printf("\n");
    }
}