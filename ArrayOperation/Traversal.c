#include<stdio.h>

int main(){

    int n ;
    printf("Enter array size : ");
    scanf("%d" , &n);

    int arr[n];

    printf("Enter element in array : \n");
    for(int i = 0 ; i < n  ; i++){
        scanf("%d" , &arr[i]);
    }


    printf("Element in array : \n");

    for(int i = 0 ; i < n ; i++){
        printf("%d \n" , arr[i]);
    }


    return 0 ;
}

