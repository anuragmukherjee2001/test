import math

def Prime(num):

    if num < 2:
        return False

    r = int(num**(1/2) + 1)
    
    for i in range(2, r):
        if(num % i == 0):
            return False

    return True 

num = int(input("enter a number: ")) 

if num <= 0:
    print("Please enter a valied input")
    exit(0)

res = Prime(num)

if(res == True):
    print("The number is prime")

else:
    print("The number is not not prime")               