#include <stdio.h>  
void Insertion_sort(int arr[],int n);
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
    Insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void Insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}