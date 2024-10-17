// #include<stdio.h>

// int main(){

//     int n , i ;
//     printf("Enter array size : ");
//     scanf("%d" , &n);

//     int arr[n];

//     printf("Enter element in array : \n");
//     for(int i = 0 ; i < n  ; i++){
//         scanf("%d" , &arr[i]);
//     }

//     printf("Element in array : \n");

//     for(int i = 0 ; i < n ; i++){
//         printf("%d \n" , arr[i]);
//     }

// /////////////  Insert element in array //////////////////

// int pos , value;

// printf("Enter position where want add element : ");
// scanf("%d" , &pos);
// printf("Value what yo want to enter : ");
// scanf("%d" , &value);

// arr[n + 1] ;

// for(int i = n  ; i >= pos - 1 ; --i){
//     arr[i + 1] = arr[i];
// } 
// arr[pos - 1] = value ;

// printf("Element in array after insertion  : \n");

//     for(int i = 0 ; i < n + 1; i++){
//         printf("%d \n" , arr[i]);
//     }
//     return 0 ;
// }



//////////  Best method to insert data at any postion /////////////////////////



#include<stdio.h>

int main(){

    int n , i ;
    printf("Enter array size : ");
    scanf("%d" , &n);

    int arr[n];

    printf("Enter element in array : \n");
    for(int i = 0 ; i < n-1  ; i++){
        scanf("%d" , &arr[i]);
    }

    printf("Element in array : \n");

    for(int i = 0 ; i < n-1 ; i++){
        printf("%d \n" , arr[i]);
    }

////  Insert element in array ////////

int pos , value ;
printf("Enter position where want add element : ");
scanf("%d" , &pos);

if(pos > n){
    printf("Can not be insert");
    return 0;
    }

printf("Value what yo want to enter : ");
scanf("%d" , &value);

arr[n - 1] = arr[pos - 1];

arr[pos - 1] = value ;

    printf("Element in array : \n");

    for(int i = 0 ; i < n ; i++){
        printf("%d \n" , arr[i]);
    }
    return 0 ;
}