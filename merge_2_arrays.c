#include<stdio.h>
int main(void){
    int n,m,i;
    printf("Enter size of array-1: ");
    scanf("%d",&n);
    int arr1[n];
    for(i=0;i<n;i++){
        printf("Enter array(1) element: ");
        scanf("%d",&arr1[i]);
    }
    printf("Enter size of array-2: ");
    scanf("%d",&m);
    int arr2[m];
    for(i=0;i<m;i++){
        printf("Enter array(2) element: ");
        scanf("%d",&arr2[i]);
    }
    int merged_size=n+m;
    int merged_arr[merged_size];
    for(int i=0;i<n;i++){
        merged_arr[i]=arr1[i];
    }
    for(int j=n;j<merged_size;j++){
        merged_arr[j]=arr2[j-n];
    }
    printf("Merged array: ");
    for (int i = 0; i < merged_size; i++) {
        printf("%d ", merged_arr[i]);
    }
}