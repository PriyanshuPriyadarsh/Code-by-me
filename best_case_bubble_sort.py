def bc_bubble_sort(arr,n):
    comp=0
    for i in range(0,n-1):
        flag=0
        for j in range(0,n-1-i):
            comp+=1
            if (arr[j+1]<arr[j]):
                flag=1
                arr[j+1],arr[j]=arr[j],arr[j+1]
                
        if flag==0:
            break

    print("Number of Round: ",i)    
    print("Number of Comparison: ",comp)    

n=int(input("Enter the size of array: "))
arr=[]
for i in range(0,n):
    a=int(input("Enter array element: "))
    arr.append(a)
print("Unsorted array:- ",end=" ")
print(arr)
bc_bubble_sort(arr,n)
print("Sorted array:- ",end=" ")
print(arr)