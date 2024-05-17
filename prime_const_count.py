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
prime=[]
composite=[]
p=0
c=0
for i in range(start,end):
    if(prime_check(i)):
        prime.append(i)
        p+=1
    else:
        composite.append(i)
        c+=1
print("Prime Number in between ",start,"& ",end,"are :-")
print(prime)
print("Total Prime Numbers are ",p)
print("Composite Number in between ",start,"& ",end,"are :-")
print(composite)
print("Total composite Numbers are ",c)
