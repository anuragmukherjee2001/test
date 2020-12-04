def perfect_number(n):
    sum = 0
    for x in range(1, n):
        if n % x == 0:
            sum=sum+ x
    if(sum == n):
         return True
    else:
        return False

num=int(input("enter a number: "))

if num <= 0:
    print("Enter a valied input")
    exit(0)

res = perfect_number(num)

if(res == True):
    print("The number is perfect")

else:
    print("The number is not perfect")    
