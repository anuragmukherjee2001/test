#  no of items 4, 
#  w = [40,10,20, 24]
#  p= [280,100,120,120]
#  profit = 440
#  capacity = 60
max_weight = int(input("Enter the maximum weight: "))

dict1 = {}
num1 = int(input("Enter the numbers of elements for the first dictionary: "))
key1 = ''

print("Enter theh value for the first dictionary")

for i in range(num1):
    key1 = int(input("Enter the weight "))
    value1 = int(input("Enter the Profit"))
    dict1[key1] = value1

weight_list = [dict1.keys()]
print(weight_list[1])

# This program is not completed
