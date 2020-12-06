def panagram(str1):
    lst1 = []

    for i in range(26):
        lst1.append(0)

    for i in str1:
        if not i == " ":
            lst1[ord(i) - ord('a')] = 1

    for i in lst1:
        if i == 0:
            return False
    return True


str1 = input("Enter the string ")

if(panagram(str1)):
    print("The string is palindrome")
else:
    print("The string is not palindrome")                         