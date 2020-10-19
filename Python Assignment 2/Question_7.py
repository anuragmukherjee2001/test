while True:
    try:
        n = int(input("Enter the number "))
        b = int(input("Enter the base "))
        break

    except:
        print("Please enter an integer number")

ans = ""

while n > 0:
    if(n % b < 10):
        ans = ans + chr((n % b) + ord('0'))

    else:
        ans = ans + chr((n % b) - 10 + ord('A'))
    n = int(n / b)

ans = ans[::-1]
print(ans)
