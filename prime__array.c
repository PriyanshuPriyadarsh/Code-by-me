#include<stdio.h>
int prime_check(int num){
    if (num<=1){
            return 0;
        }else{
            for(int j=2;j<num;j++){
                if(num%j==0){
                    return 0;
                    break;
                }
            }
            return 1;
        }
}
int prime(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        if (prime_check(arr[i])) {
            printf("%d is a prime number at index %d\n", arr[i],i);
        } else {
            printf("%d is not a prime number at index %d\n", arr[i],i);
        }
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
    printf("*--------------------------------*  ");
    prime(arr,n);
    return 0;
}