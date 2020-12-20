def duplicate_present(dict1, key):
    if key in dict1.keys():
        return True
    else:
        return False


dict1 = {}
key = ''

n = int(input("Enter the number of elements: "))

for i in range(n):
    key = int(input("Enter the key "))
    value = int(input("Enter the value"))
    dict1[key] = value

key = int(input("Enter the value of the key: "))

if duplicate_present(dict1, key) == True:
    print("The key is already present")

else:
    print("The key is not present")                    