'''In mathematics, the factorial of an integer n, denoted by n! is the following product:
n!=1×2×…×n
For the given integer n calculate the value n!. Don't use math module in this exercise.'''

n=int(input())
tot=1

for i in range(1,n+1):
    
    tot*=i
    
print(tot)