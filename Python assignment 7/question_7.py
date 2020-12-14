def toList(string): 
    temp = list()
    for x in string: 
        temp.append(x) 
    return temp 

def toString(List): 
    return ''.join(List)  

def swap_case(string):
    swapped_string = string.swapcase()
    return swapped_string  

def reverse(string):
    rev_str = string[::-1]
    return rev_str 

def remove_same_char(string):
    temp = toList(string)
    temp2 = []
    for i in temp:
        if i not in temp2:
            temp2.append(i)

    joined_str = toString(temp2) 
    swapped_string = swap_case(joined_str) 
    rev_str = reverse(swapped_string)      
    return rev_str             


string = input("Enter the string: ")
print(remove_same_char(string))    