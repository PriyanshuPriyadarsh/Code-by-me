#include <stdio.h>  
void Selection_sort(int arr[],int n);
// void swap(int *a,int *b);
int main(void){
    int n,k,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter array element: ");
        scanf("%d",&arr[i]);
    }        
    printf("Unsorted Array:-");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nSorted Array:-");
    Selection_sort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void Selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        // swap(&arr[i],&arr[min]);
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}
// void swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }