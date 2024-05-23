#include<stdio.h>
int binary_Search(int arr[],int n,int k){
    int low=0,high=n-1;
    while (low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
void sort(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j+1]<arr[j]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main(void){
    int n,k,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter array element: ");
        scanf("%d",&arr[i]);
    }
    printf("Array Unsorted:- ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    sort(arr,n);
    printf("\nArray Sorted:- ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter Element to search: ");
    scanf("%d",&k);
    int res=binary_Search(arr,n,k);
    if(res!=-1){
        printf("%d Found at index %d",k,res);
    }else{
        printf("%d Not Found!",k);
    }
}