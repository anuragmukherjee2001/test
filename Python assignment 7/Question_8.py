st = input("Enter the string : ")

n = int(input())
nst = ""
for i in range(n):
    c = input()
    x = int(input())
    if(c == 'L'):
        nst += st[x]
    else :
        nst += st[len(nst) - x]

print(nst)