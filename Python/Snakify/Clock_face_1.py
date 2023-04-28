'''H hours, M minutes and S seconds are passed since the midnight (0 ≤ H < 12, 0 ≤ M < 60, 0 ≤ S < 60). Determine the angle (in degrees) of the hour hand on the clock face right now.'''


hrs=int(input())
min=int(input())
sec=int(input())

time=hrs+(min/60)+(sec/3600)

angle=time*30

print(angle)
