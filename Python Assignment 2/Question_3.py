import math

while True:
    try:
        n = int(input("Enter the number "))
        break

    except:
        print("Please enter an integer number")

def prime(n):

    for i in range(2, int(math.sqrt(n)) + 1):
        while n % i == 0:
            print(i)
            n = n / i  

prime(n)              