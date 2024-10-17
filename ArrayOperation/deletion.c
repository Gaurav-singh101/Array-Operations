#include<stdio.h>

int main(){

    int n , i ;
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

/////////////  Deletion element in array //////////////////

int pos ;
printf("Enter position which element want to delete : ");
scanf("%d" , &pos);

for(int i = pos - 1 ; i < n ; i++){
    arr[i] = arr[i + 1];
} 
printf("Element in array after deletion : \n");

    for(int i = 0 ; i < n - 1 ; i++){
        printf("%d \n" , arr[i]);
    }
    


    return 0 ;
}