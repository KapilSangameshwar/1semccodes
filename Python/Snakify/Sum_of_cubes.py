'''For the given integer N calculate the following sum:
1^3+2^3+…+N^3'''

n=int(input())
tot=0

for i in range(1,n+1):
    
    tot+=i**3
    
print(tot)