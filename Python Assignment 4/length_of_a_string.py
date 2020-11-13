def length(string):
    count = 0

    for i in string:
        count = count + 1
    return count

string = input("Enter the string ")

n = length(string)
print(n)        