#include<stdio.h>
void Bubble_sort(int arr[],int n);
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
    Bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void Bubble_sort(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}