
def sum_of_all_elements():
    sum = 0
    list1 = [1,2,3,6,2,6]

    for items in range(0, len(list1)):
        sum = sum + list1[items]

    print("The sum of all the elements in the list is", sum)    

def using_standard_function():
    
    list1 = [1,2,6,2,3]

    total = sum(list1)

    print("Sum of the elements in the list is", total)

# sum_of_all_elements()  
using_standard_function()  