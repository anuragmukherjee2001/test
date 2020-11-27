def sorting_with_function():
    list1 = [1,22,6,11,3,3,4,66,1,2]
    list1.sort()
    print("The sorted list is")
    print(list1)


def sorting_without_function():
    list1 = [1,22,6,11,3,3,4,66,1,2]    
    list2 = []

    while list1:
        minimum = list1[0]  
        for x in list1: 
            if x < minimum:
                minimum = x
        list2.append(minimum)
        list1.remove(minimum)
            

    print(list2)


sorting_without_function()
sorting_with_function()   
