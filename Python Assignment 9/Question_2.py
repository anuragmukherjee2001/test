import numpy as np
import random


# def show(matrix):
#     for i in range(row):
#         for j in range(col):
#             print(matrix[i][j], end=" ")
#         print()


row = int(input("Enter the number of rows:"))
col = int(input("Enter the number of columns:"))

matrix = []
print("Enter the entries rowwise:")

for i in range(row):
    a = []
    for j in range(col):
        a.append(int(input()))
    matrix.append(a)
    np_matrix = np.array(matrix)


for i in range(row):
    for j in range(col):
        print(matrix[i][j], end=" ")
    print()


def sum_of_diagonal(matrix):

    diag = np.diagonal(matrix)
    return sum(diag)


print(sum_of_diagonal(np_matrix))
