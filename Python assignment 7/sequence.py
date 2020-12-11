def get_fibonacci(n):
    if n == 0 or n == 1:
        return 1

    else:
        return get_fibonacci(n - 1) + get_fibonacci(n - 2)    

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True    

number = int(input("enter the number: "))

if (number-1)%2:
    if number == 2:
        ans = 2
    else:
        cnt = 1
        num = 3
        while(cnt<=number):
            if(is_prime(num)):
                cnt+=1
                if cnt == number//2:
                    ans = num
            num+=1
else:
    ans = get_fibonacci(number//2)

print(ans)
