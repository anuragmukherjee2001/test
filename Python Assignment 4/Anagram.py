def anagram(string1, string2):
    n1 = len(string1)
    n2 = len(string2)

    if n1!= n2:
        print("The string are not anagram ")
        exit()

    string1 = sorted(string1)    
    string2 = sorted(string2)    

    for i in range(0, n1):
        if(string1[i] != string2[i]):
            print("The string are not equal ")

    else:
        print("The string are anagram") 


# string1 = input("Enter the first string ")
# string2 = input("Enter the second string ")

def anagram_without_sorted_function(string1, string2):
    n1 = len(string1)
    n2 = len(string2)

    if n1!= n2:
        print("The string are not anagram ")
        exit()

    arr1 = list(string1)    
    arr2 = list(string2)

    count = 0

    for i in arr1:
        count = 1

        for j in arr2:
            if(i == j):
                count = 0
                break
    
    if count == 0:
        print("The string is anagram")
    else:
        print("The string is not anagram")

string1 = input("Enter the first string ")
string2 = input("Enter the second string ")                  

anagram_without_sorted_function(string1, string2)
# anagram(string1, string2)
