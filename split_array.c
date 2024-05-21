#include<stdio.h>
void splitarray(int arr[],int n,int sarr1[],int sarr2[]){
    int m=n/2;
    for(int i=0;i<m;i++){
        sarr1[i]=arr[i];
    }
    for(int i=m;i<n;i++){
        sarr2[i-m]=arr[i];
    }
}
int main(){
    int n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter array element: ");
        scanf("%d",&arr[i]);
    }
    printf("*--------------------------*\n");
    printf("Original Array:-\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int m=n/2;
    int sub_arr_1[m];
    int sub_arr_2[n-m];
    splitarray(arr,n,sub_arr_1,sub_arr_2);
    printf("\nFirst Half Array:-\n");
    for(int i=0;i<m;i++){
        printf("%d ",sub_arr_1[i]);
    }
    printf("\nSecond Half Array:-\n");
    for(int i=0;i<n-m;i++){
        printf("%d ",sub_arr_2[i]);
    }
    return 0;
}