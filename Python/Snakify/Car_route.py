# A car can cover distance of N kilometers per day. How many days will it take to cover a route of length M kilometers? The program gets two numbers: N and M


import math

M=int(input("Enter the number kilometers per day"))
N=int(input("Enter the total number kilometers"))

days=math.ceil(N/M)

print(days)