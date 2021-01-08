import numpy as np

n = int(input("Enter the number of elements:"))

arr1 = []
arr2 = []

print("Enter the first array:")


for i in range(0, n):
    ele = int(input())

    arr1.append(ele)
np_arr1 = np.array(arr1)

print(np_arr1)


print("Enter the second array:")

for i in range(0, n):
    ele = int(input())

    arr2.append(ele)
np_arr2 = np.array(arr2)

print(np_arr2)


def substraction(arr1, arr2):
    sub_matrix = arr1 - arr2
    return sub_matrix


print("The resultant matrix is: ")

print(substraction(np_arr1, np_arr2))
