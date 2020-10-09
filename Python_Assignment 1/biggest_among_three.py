a = int(input("Enter the 1st number "))
b = int(input("Enter the 2st number "))
c = int(input("Enter the 3st number "))

if(a > b and a > c):
    print("The Largest number is ", a)
elif (b > a and b > c):
    print("The Largest number is ", b)
else:        
    print("The Largest number is ", c)