import numpy as np

row = int(input("Enter the number of rows: "))
col = int(input("Enter the number of columns: "))

matrix = []

print("Enter the values of the matrix: ")

for i in range(row):
    a = []
    for j in range(col):
        a.append(int(input()))
    matrix.append(a)
np_matrix1 = np.array(matrix)
np_matrix2 = np_matrix1.reshape(row, col)
print(np_matrix2)

lst = []

print("Enter the values of the resultant matrix: ")

for i in range(row):
    ele = int(input())
    lst.append(ele)
np_arr = np.array(lst)
print(np_arr)

res = np.linalg.solve(np_matrix2, np_arr)
print(res)
