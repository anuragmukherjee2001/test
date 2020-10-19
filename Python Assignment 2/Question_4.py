while True:
    try:
        n = int(input("Enter the number "))
        break

    except:
        print("Please enter an integer number")

for i in range(1, n):
    for j in range(-1+i, -1, -1):
        print(2**j,end=" ")
    print(" ")    