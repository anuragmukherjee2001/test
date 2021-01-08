import numpy as np

row = int(input("Enter the number of rows:"))
col = int(input("Enter the number of columns:"))

matrix = []

print("Enter the matrix:")

for i in range(row):
    a = []
    for j in range(col):
        a.append(int(input()))
    matrix.append(a)
np_matrix = np.array(matrix)

print(np_matrix)

row_wise_max_elements = np.amax(np_matrix, axis=1)
column_wise_min_elements = np.amin(np_matrix, axis=0)

print("The rowwise maximum elements are: ")
print(row_wise_max_elements)

print("The columnwise minimum elements are: ")
print(column_wise_min_elements)
