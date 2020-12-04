def Max_of_three(num1, num2, num3):
    if num1 > num2 and num1 > num3:
        return num1

    elif num2 > num1 and num2 > num3:
        return num2

    else:
        return num3

print("Enter 3 inputs")
num1 = input()                
num2 = input()                
num3 = input()

print(Max_of_three(num1, num2, num3))