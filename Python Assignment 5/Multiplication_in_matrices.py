list1 = [[1,2,3],[4,5,6],[7,8,9]]
list2 = [[1,2,3],[4,5,6],[7,8,9]]

res = [[0,0,0],[0,0,0],[0,0,0]]

for i in range(len(list1)):
    for j in range(len(list2)):
        for k in range(len(list2)):
            res[i][j] += list1[i][k] * list2[k][j]


for i in res:
    print(i)            