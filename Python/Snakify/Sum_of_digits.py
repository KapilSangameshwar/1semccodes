# Given a three-digit number. Find the sum of its digits

a=str(input())
b=len(a)
print(int(a[b-3])+int(a[b-2])+int(a[b-1]))