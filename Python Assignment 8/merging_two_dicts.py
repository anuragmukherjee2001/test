def merge_two_dict(dict1, dict2):
    dict1.update(dict2)
    return dict1

dict1 = {}
num1 = int(input("Enter the numbers of elements for the first dictionary: "))
key1 = ''

print("Enter theh value for the first dictionary")

for i in range(num1):
    key1 = input("Enter the key ")
    value1 = int(input("Enter the value"))
    dict1[key1] = value1


dict2 = {}
num2 = int(input("Enter the numbers of elements for the second dictionary: "))
key2 = ''

print("Enter theh value for the seconds dictionary")

for i in range(num2):
    key2 = input("Enter the key ")
    value2 = int(input("Enter the value"))
    dict2[key2] = value2

print(merge_two_dict(dict1, dict2))