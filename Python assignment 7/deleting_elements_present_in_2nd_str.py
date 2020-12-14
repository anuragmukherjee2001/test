def toList(string): 
    temp = list() 
    for x in string: 
        temp.append(x) 
    return temp 

def toString(List): 
    return ''.join(List) 

def CountArray(string): 
    count = [0] * 128 
    for i in string: 
        count[ord(i)] += 1
    return count 

def removeCharacters(string1, string2): 
    count = CountArray(string2) 
    ind1 = 0
    ind2 = 0
     
    str_list = toList(string1) 
  
    while ind1 != len(str_list): 
        temp = str_list[ind1] 
        if count[ord(temp)] == 0: 
            str_list[ind2] = str_list[ind1] 
            ind2 += 1
        ind1 += 1

    return toString(str_list[0:ind2]) 

string1 = input("Enter the first string: ")
string2 = input("Enter the second string: ")
print(removeCharacters(string1, string2))