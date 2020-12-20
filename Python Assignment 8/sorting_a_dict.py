
dict1 = {}
n = int(input("Enter the number of elements: "))

key = ''

for i in range(n):
    key = int(input("Enter the key "))
    value = int(input("Enter the value"))
    dict1[key] = value

sorted_values_in_ascending_order = sorted(dict1.values())
sorted_values_in_descending_order = sorted_values_in_ascending_order[::-1]

sorted_dict_in_ascending_order = {}
sorted_dict_in_descending_order = {}

for i in sorted_values_in_ascending_order:
    for keys in dict1.keys():
        if dict1[keys] == i:
            sorted_dict_in_ascending_order[keys] = dict1[keys]
            break

for i in sorted_values_in_descending_order:
    for keys in dict1.keys():
        if dict1[keys] == i:
            sorted_dict_in_descending_order[keys] = dict1[keys]
            break

print("Elements in ascending order are: ")
print(sorted_dict_in_ascending_order)

print("Elements in descending order are: ")
print(sorted_dict_in_descending_order)