def Triplet_sum(arr,n,sum):
    sa=[]
    for i in range(0,n):
        for j in range(i+1,n):
            for k in range(j+1,n):
                tri_sum=arr[i]+arr[j]+arr[k]
                if(tri_sum==sum):
                    print("Triplet-sum Subarray Element:",arr[i],arr[j],arr[k],end=" ")
                    sa.append(arr[i])
                    sa.append(arr[j])
                    sa.append(arr[k])
                    print("\nTriplet-Sum Sub-array :-",end="")
                    print(sa)
                    return
    print("Triplet sum not found!")
n=int(input("Enter the size of array(Greater than 3): "))
arr=[]
for i in range(0,n):
    a=int(input("Enter array element: "))
    arr.append(a)
print("Array:- ",end=" ")
print(arr)
sum=int(input("Enter sum: "))
Triplet_sum(arr,n,sum)
