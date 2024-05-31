#include <stdio.h>  
void Given_sum(int arr[],int n,int sum){
    for(int i=0;i<n;i++){
        int sub_sum=arr[i];
        if(sub_sum==sum){
            printf("Sum Found at index %d",i);
            return;
        }
        else{
            for(int j=i+1;j<n;j++){
                sub_sum+=arr[j];
                if (sub_sum==sum){
                    printf("Sum found between index %d & %d",i,j);
                    return;
                }
            }
        }
    }
    printf("Sub Array not found!");
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
    printf("Array:-");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int sum;
    printf("\nEnter Sum of Sub-array: ");
    scanf("%d",&sum);
    Given_sum(arr,n,sum);
}