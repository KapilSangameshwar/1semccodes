'''A timestamp is three numbers: a number of hours, minutes and seconds. Given two timestamps, calculate how many seconds is between them. The moment of the first timestamp occurred before the moment of the second timestamp'''


a1=int(input("Enter the hours "))
b1=int(input("Enter the hours "))
c1=int(input("Enter the hours "))

a2=int(input("Enter the hours "))
b2=int(input("Enter the hours "))
c2=int(input("Enter the hours "))

time1=a1*3600+b1*60+c1
time2=a2*3600+b2*60+c2

diff=time2-time1

print(diff)