#include<stdio.h>
int linear_Search(int arr[],int n,int k);
int main(void){
    int n,k,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter array element: ");
        scanf("%d",&arr[i]);
    }
    printf("Array:-");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter Element to search: ");
    scanf("%d",&k);
    int result=linear_Search(arr,n,k);
    if(result!=-1){
        printf("%d Found at index %d",k,result);
    }else{
        printf("%d Not Found!",k);
    }
}
int linear_Search(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}