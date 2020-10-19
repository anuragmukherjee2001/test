while True:
    try:
        n = int(input("Enter the number "))
        break

    except:
        print("Please enter an integer number")

temp = n        
rev = 0        

while(n > 0):
    rem = n % 10
    rev = rev * 10 + rem
    n = n // 10

if(temp == rev):
    print("The number is palindrome")

else:
    print("not palindrome")               