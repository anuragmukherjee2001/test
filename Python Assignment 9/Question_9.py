import numpy as np

row = int(input("Enter the number of rows:"))
col = int(input("Enter the number of columns:"))

matrix1 = []
matrix2 = []
print("Enter the matrix:")


for i in range(row):
    a = []
    for j in range(col):
        a.append(int(input()))
    matrix1.append(a)
np_matrix1 = np.array(matrix1)

print(np_matrix1)

print("Enter the resultant matrix: ")

for i in range(0, row):
    ele = int(input())

    matrix2.append(ele)
np_matrix2 = np.array(matrix2)

print(np_matrix2)

result_matrix = np.linalg.solve(np_matrix1, np_matrix2)
print(result_matrix)
