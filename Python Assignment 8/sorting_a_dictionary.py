dict1 = {}
num1 = int(input("Enter the numbers of elements for the first dictionary: "))
key1 = ''

print("Enter theh value for the first dictionary")

for i in range(num1):
    key1 = input("Enter the key ")
    value1 = int(input("Enter the value"))
    dict1[key1] = value1

for i in sorted (key1) : 
    print ((i, key1[i]), end =" ")     