import java.util.*;
public class Binary_search {
    static int binary_search(int arr[],int n,int k){
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==k){
                return mid;
            }else if(arr[mid]<k){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return -1;
    }
    static void sort(int arr[],int n){
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
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int n,k;
        System.out.print("Enter the size of Array: ");
        n=s.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            System.out.print("Enter the Array Element: ");
            arr[i]=s.nextInt();
        }
        System.out.print("\nUnsorted array:- ");
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
        sort(arr, n);
        System.out.print("\nSorted array:- ");
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.print("\nEnter the element to search: ");
        k=s.nextInt();
        int res=binary_search(arr, n, k);
        if(res!=-1){
            System.out.println(k+" Found at index "+res);
        }else{
            System.out.println(k+" Not Found!");
        }
        s.close();
    }
}