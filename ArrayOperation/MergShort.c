#include<stdio.h>

void merg_sort(int a[] , int x , int b[] , int y , int sort_Array[]){

    int i = 0 , j = 0 , k = 0 ; 


    while(i < x && j < y){
        if(a[i] <= b[j]){
                sort_Array[k] = a[i] ;
                i++ ;
                k++ ;
        }
        else{
            sort_Array[k] = b[j] ;
            j++ ; 
            k++ ; 
        }
    }

    while (i < x){
        sort_Array[k++] = a[i++];
    }

    while (j < y){
        sort_Array[k] = b[j];
        k++;
        j++;
    }

}


int main(){

    int n ; 
    printf("Enter 1st array size : ");
    scanf("%d" , &n);
    int m ; 
    printf("Enter 2nd array size : ");
    scanf("%d" , &m);

    int arr1[n] , arr2[m];

    printf("Enter first array element : ");

    for(int i = 0 ; i < n ; i++){
    scanf("%d" , &arr1[i]);
    }
    
    printf("Enter second array element : ");

    for(int i = 0 ; i < m ; i++){
    scanf("%d" , &arr2[i]);
    }

    int merged[n + m] ;

    printf("sorted element : ");

  merg_sort(arr1 , n , arr2 , m , merged);

  for(int i = 0 ; i < (n + m); i++){
    printf("%d \n" , merged[i]);
  }
    


    return 0 ; 
}