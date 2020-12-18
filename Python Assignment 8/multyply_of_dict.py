def mul_of_items(dict):
    mul = 1

    for i in dict:
        mul *= dict[i]

    return mul

dict = {}
n = int(input("Enter the number of elements in the dictionary: "))

key = ''

for i in range(n):
    key = int(input("Enter the key "))
    value = int(input("Enter the value"))
    dict[key] = value

print(mul_of_items(dict))