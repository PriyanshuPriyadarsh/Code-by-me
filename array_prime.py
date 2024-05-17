def prime_check(num):
    if num<=1:
        return 0
    else:
        for i in range(2,num):
            if (num%i==0):
                return 0
                break
        return 1
n=int(input("Enter the size of array: "))
arr=[n]
for i in range(0,n):
    a=int(input("Enter array element: "))
    arr.append(a)
print(arr)
for i in arr:
    if (prime_check(i)):
        print(i," is prime number in array")