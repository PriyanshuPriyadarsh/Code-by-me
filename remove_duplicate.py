def duplicate(arr):
    unique=[]
    for i in arr:
        if i not in unique:
            unique.append(i)
    return unique
n=int(input("Enter the size of array: "))
arr=[n]
for i in range(0,n):
    a=int(input("Enter array element: "))
    arr.append(a)
result=duplicate(arr)
print("Array before duplicate removal:-\n",arr)
print("Array after duplicate removal:-\n",result)
