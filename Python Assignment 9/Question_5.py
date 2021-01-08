import numpy as np
import random


def show(matrix):
    for i in range(row):
        for j in range(col):
            print(matrix[i][j], end=" ")
        print()


row = int(input("Enter the number of rows:"))
col = int(input("Enter the number of columns:"))

matrix1 = []
matrix2 = []
print("Enter the first matrix:")


for i in range(row):
    a = []
    for j in range(col):
        a.append(int(input()))
    matrix1.append(a)
    np_matrix1 = np.array(matrix1)
show(np_matrix1)


print("Enter the second matrix:")

for i in range(row):
    a = []
    for j in range(col):
        a.append(int(input()))
    matrix2.append(a)
    np_matrix2 = np.array(matrix2)
show(np_matrix2)


def multiplication(matrix1, matrix2):
    multiply_matrix = np.dot(matrix1, matrix2)

    return multiply_matrix


print(multiplication(np_matrix1, np_matrix2))
