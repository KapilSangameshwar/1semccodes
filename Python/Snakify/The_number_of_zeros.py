'''Given N numbers: the first number in the input is N, after that N integers are given. Count the number of zeros among the given integers and print it.
You need to count the number of numbers that are equal to zero, not the number of zero digits.'''

n=int(input())
tot=0

for i in range(n):
    a=int(input())
    
    if(a==0):
        tot+=1
        
print(tot)        