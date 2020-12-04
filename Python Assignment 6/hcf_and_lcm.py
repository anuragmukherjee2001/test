def hcf(num1, num2):
    if(num1 == 0):
        return num2
    else:
        return hcf(num2 % num1, num1)

def lcm(num1, num2):
    den = hcf(num1, num2)
    res = (num1 * num2)//den
    return res

print("Enter two numbers")
num1 = int(input())        
num2 = int(input())        

print(hcf(num1, num2)) 
print(lcm(num1, num2))       

