def second_most_frequent(string):

    most_frequent = 0
    second_frequent = 0
    
    lst_of_characters = [0] * 128
    for i in range(len(string)):
        lst_of_characters[ord(string[i])] += 1 

    for i in range(0, 128) : 
  
        if lst_of_characters[i] > lst_of_characters[most_frequent] : 
  
            second_frequent = most_frequent 
            most_frequent = i 

        elif (lst_of_characters[i] > lst_of_characters[second_frequent] and  lst_of_characters[i] != lst_of_characters[most_frequent]) :
            
              
            second_frequent = i 
 
    return second_frequent   

string = input("Enter the string: ")  
result = chr(second_most_frequent(string))  
print(result)  