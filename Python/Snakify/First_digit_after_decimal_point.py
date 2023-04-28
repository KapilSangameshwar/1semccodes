# Given a positive real number, print its first digit to the right of the decimal point.

a=float(input())
b=a%1
print(int(b*10))
