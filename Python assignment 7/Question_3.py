def string_operation(string):
    count = 0
    
    for i in string:
        if(i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u'):
            count = count + 1

    print("The number of vowels are: ", count)

    string_uppercase = string.upper()
    print(string_uppercase)

    str_rev = string[::-1].upper()
    print(str_rev)

string = input("Enter the string: ")
string_operation(string)            