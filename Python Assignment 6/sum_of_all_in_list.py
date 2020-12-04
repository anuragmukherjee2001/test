def sum(lst1):
    total = 0

    for i in range(0, len(lst1)):
        total = total + lst1[i]

    return total

lst1 = [1,2,3,4]   
print(sum(lst1))     