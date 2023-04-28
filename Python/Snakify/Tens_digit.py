# Given an integer. Print its tens digit.

a=str(input())
b=len(a)
if (b!=1):
    print(a[b-2])
else:    
    print(0)
