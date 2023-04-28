'''N numbers are given in the input. Read them and print their sum.
The first line of input contains the integer N, which is the number of integers to follow. Each of the next N lines contains one integer. Print the sum of these N integers.'''


n=int(input())
tot=0

for i in range(n):
    a=int(input())
    tot+=a
    
print(tot)