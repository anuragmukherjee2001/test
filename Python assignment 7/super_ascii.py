def super_ascii(string):

    lst = [None]*26
    for i in range(0,26):
        lst[i] = 0

    for i in range(len(string)):
        index = ord(string[i]) - 96
        lst[index - 1] += 1

    for i in range(len(string)):

        if (lst[index - 1] != index):
            return False
            
    else:
        return True

string = input("Enter the string")

if(super_ascii(string) == True):
    print("The string is super ascii")
else:
    print("The string is not a super ascii")                    