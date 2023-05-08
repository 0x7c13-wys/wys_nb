#include<stdio.h>
#include<stdlib.h>

void  quick_sort(int* arr, int low, int high){
    int p = arr[high];
    if ( low >= high ){
        return;
    }
    while ( low < high){
        while ( low < high && p >= arr[low]){
            low++;
        }
        if ( low < high){
            arr[high] = arr[low];
            low++;
        }
        while ( low < high && p <= arr[high]){
            high--;
        }
        if ( p > arr[high] ){
            arr[low] = arr[high]; 
            high--;
        }
    }
    p = arr[high];
    quick_sort( arr, low, high - 1);
    quick_sort( arr, low + 1, high);
}





int main(){

    int arr[20] = {54, 2, -58, 3, 34, 5, 76, 7, 32, 4, 43, 9, 1, 56, 8,-70, 635, -234, 532, 543};
    int i = 0;
    for ( i = 0; i < 20; i++){
        printf("%d  ", arr[i]);
    }
    printf("\n");
    quick_sort( arr, 0, 19);
    for ( i = 0; i < 20; i++){
        printf("%d  ", arr[i]);
    }
    printf("\n");
    system("pause");
} 


































/* 
#include<stdio.h>
/* #include<stdlib.h> */




/* 
void quicksort(int *arr, int left, int right){
    int aim = arr[left];
    while( left < right){
        while( left < right && arr[right] >= aim ){
            right--;
        }
        if(left < right){
            arr[left] = arr[right];  
        }
        while( left < right && arr[left] =< aim){
            left++;
        }
        if(left < right){
            arr[right] = arr[left];
        }
    }
    arr[left] = aim;
    quicksort(arr, left, right - 1);
    quicksort(arr, left + 1, right);
}


int main(){
    int arr[] = {900, 2, -58, 3, 34, 5, 76, 7, 32, 4, 43, 9, 1, 56, 8,-70, 635, -234, 532, 543, 2500};
    quicksort(arr, 0, 20);
    for (int i = 0; i < 21; i++){
        printf("%d  ", arr[i]);
    }
    printf("\n");
    system("pause");
}
 */

















































































