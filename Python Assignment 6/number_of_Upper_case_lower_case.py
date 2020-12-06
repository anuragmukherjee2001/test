def upper_lower(str1):
    upper = 0
    lower = 0
    trash = 0
    for i in str1:
        if i.isupper():
            upper = upper + 1
        elif i.islower():
            lower = lower + 1
        else:
            trash = trash + 1

    print("The number of uppercase letters are ", upper)          
    print("The number of lowercase letters are ", lower)          

str1 = input("Enter the string ")
upper_lower(str1)
