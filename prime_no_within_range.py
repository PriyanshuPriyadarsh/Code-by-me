def prime_check(num):
    if num<=1:
        return 0
    else:
        for i in range(2,num):
            if (num%i==0):
                return 0
                break
        return 1
start=int(input("Enter starting point: "))
end=int(input("Enter ending point: "))
for i in range(start,end):
    if(prime_check(i)):
        print(i,end=",")