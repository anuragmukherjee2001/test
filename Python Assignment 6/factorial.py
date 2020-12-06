def fact(num):
    if num == 0 or num == 1:
        return 1
    else:
        res = 1
        for i in range(2, num + 1):
            res = res * i 
        return res       

factorial = int(input("Enter the number "))
print(fact(factorial))