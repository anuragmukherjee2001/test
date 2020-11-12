def Question_5():

    inp1 = input("Enter the first string ")
    inp2 = input("Enter the second string ")
    inp3 = input("Enter the third string ")
    string1 = ""
    for i in inp1:
        if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u' or i=='A' or i=='E' or i=='I' or i=='O' or i=='U'):
            string1+='$'
        else:
            string1+=i
    print(string1)
    string2 = ""
    for i in inp2:
        if(i =='a' or i =='e' or i =='i' or i =='o' or i =='u' or i =='A' or i =='E' or i =='I' or i =='O' or i=='U'):
            string2+=i
        else:
            string2+='*'
    print(string2)
    string3 = ""
    for i in inp3:
        string3+=i.lower()
    print(string3)
Question_5()