def digit_count(n):
    dc=0
    while n>0:
        d=n%10
        dc+=1
        n//=10
    return dc
def arm(n,dc):
    d_count=dc
    org_num=n
    d_sum=0
    while n>0:
        digi=n%10
        d_sum=d_sum+digi**dc
        n//=10
    return d_sum
num=int(input("Enter a number: "))
d_c=digit_count(num)
res=arm(num,d_c)
if (res==num):
    print(num," is Armstrong Number")
else:
    print(num," is not a Armstrong Number")
#result=digit_count(num)
#print(result)