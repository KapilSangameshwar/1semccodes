# A cupcake costs A dollars and B cents. Determine, how many dollars and cents should one pay for N cupcakes. A program gets three numbers: A, B, N. It should print two numbers: total cost in dollars and cents.

a=int(input("Enter the amount in dollars"))
b=int(input("Enter the amount in cents"))
n=int(input("Enter the number of cupcakes"))

d=(a*100+b)*n

dollars=d//100
cents=d%100

print(dollars,cents)