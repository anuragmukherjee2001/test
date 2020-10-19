
while (1):
    try:
        inp = int(input("Enter a number "))
        break

    except:
        print("wrong") 


flag = 0

for i in (2, inp**0.5):
    if(inp % i == 0):
        flag = 1
        break

if(flag == 1):
    print("The number is not a prime number")

else:
    print("The number is a prime number")
