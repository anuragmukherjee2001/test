def sum_of_items(dict):
    sums = 0

    for i in dict:
        sums += dict[i]

    return sums

dict = {}
n = int(input("Enter the number of elements in the dictionary: "))

key = ''

for i in range(n):
    key = int(input("Enter the key "))
    value = int(input("Enter the value"))
    dict[key] = value
        
print(dict)
print(sum_of_items(dict))