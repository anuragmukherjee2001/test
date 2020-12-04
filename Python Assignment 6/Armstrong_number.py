def digits(num):
    count=0
    while(num>0):
        count = count+1
        num=num//10

    return count    

def Armstrong(num):
    sum = 0
    
    temp = num
    while temp > 0:
        digit = temp % 10
        sum += digit ** digits(num)
        temp //= 10

    if num == sum:
        return True

    else:
        return False

num = int(input("enter a number: ")) 

if num <= 0:
    print("Please enter a valied input")
    exit(0)

res = Armstrong(num)

if(res == True):
    print("The number is Armstrong")

else:
    print("The number is not Armstrong")