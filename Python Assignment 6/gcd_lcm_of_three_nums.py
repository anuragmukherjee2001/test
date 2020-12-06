def hcf(num1, num2):
    if(num1 == 0):
        return num2
    else:
        return hcf(num2 % num1, num1)

def lcm(num1, num2):
    den = hcf(num1, num2)
    res = (num1 * num2)//den
    return res        

print("Enter three numbers")
num1 = int(input("Enter the first number "))        
num2 = int(input("Enter the second number "))        
num3 = int(input("Enter the third number "))

res_hcf = hcf(num1, hcf(num2, num3))
res_lcm = lcm(num1, lcm(num2, num3))
print("The gcd of 3 numbers is " + str(res_hcf))
print("The lcm of 3 numbers is " + str(res_lcm))