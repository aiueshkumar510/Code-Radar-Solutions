#include<stdio.h>
void reverse (int arr[],int n);
void pointerArr(int arr[],int n);
int main (){
    int a[]={1,2,3,4,5,}
    reverse(arr,5);
    printArr(arr,5);
    return 0;
}
void printArr(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void reverse(int arr[],int n){
for(int i=0;i<n;i++){
    int fristval =arr[i];
    int secondval=arr[n-i-1];
    arr[i]=secondval;
    arr[n-i-1]=fristval;
    
}
}
int countodd(int arr[],int n){
    int count;
    for(int i=0,i<n;i++){
        for arr[1]%2!=0{
            count++
        }
    }
}