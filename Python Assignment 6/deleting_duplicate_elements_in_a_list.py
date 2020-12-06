def delete_duplicate(lst1):
    lst2 = []
    for i in lst1:
        if i not in lst2:
            lst2.append(i)
    return lst2


list1 = [1, 2, 3, 3,3]
print("The fresh list is")
print(delete_duplicate(list1))            