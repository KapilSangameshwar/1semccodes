'''Chess king moves horizontally, vertically or diagonally to any adjacent cell. Given two different cells of the chessboard, determine whether a king can go from the first cell to the second in one move.
The program receives the input of four numbers from 1 to 8, each specifying the column and row number, first two - for the first cell, and then the last two - for the second cell. The program should output YES if a king can go from the first cell to the second in one move, or NO otherwise.

'''


x1 = int(input())
y1 = int(input())
x2 = int(input())
y2 = int(input())

if abs(x1-x2)<=1 and abs(y1-y2)<=1:
    print("YES")
else:
    print("NO")