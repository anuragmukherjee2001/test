def palindrome(str1):
    pal = str1[::-1]

    if pal == str1:
        return True
    else:
        return False

str1 = input("Enter the string ")

if(palindrome(str1)):
    print("The string is palindrome")
else:
    print("The string is not palindrome")                