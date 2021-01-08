import numpy as np


def show(matrix):
    for i in range(row):
        for j in range(col):
            print(matrix[i][j], end=" ")
        print()


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
show(np_matrix1)

print(np_matrix1.trace())
