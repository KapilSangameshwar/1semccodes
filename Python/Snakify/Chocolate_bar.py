'''Chocolate bar has the form of a rectangle divided into n×m
 portions. Chocolate bar can be split into two rectangular parts by breaking it along a selected straight line on its pattern. Determine whether it is possible to split it so that one of the parts will have exactly k squares.
The program reads three integers: n, m, and k. It should print YES or NO.

Advertising by Google, may be based on your interests'''


n = int(input("Enter the number of rows of the chocolate bar: "))
m = int(input("Enter the number of columns of the chocolate bar: "))
k = int(input("Enter the number of squares required in one of the parts: "))

if k > n * m:
    print("NO")
elif k % n == 0 or k % m == 0:
    print("YES")
else:
    print("NO")