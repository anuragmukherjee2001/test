while True:
    try:
        n = int(input("Enter the number "))
        break

    except:
        print("Please enter an integer number")

for i in range(2, n):
    if(n % i == 0):
        print("The smallest divisor of the number is", i)
        break            