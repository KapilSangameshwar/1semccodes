# Given three integers, print the smallest value.

a=int(input())
b=int(input())
c=int(input())

if(a<b):
    if(a<c):
        print(a)
    else:
        print(c)
elif(b<a):
    if(b<c):
        print(b)
    else:
        print(c)