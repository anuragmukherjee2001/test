def Question_4():

    inp = input("Enter string ")

    string = ""
    i = 0
    while(i!=len(inp)):
        g=inp[i]

        n=0        
        for j in range(i,len(inp)):
            if(inp[i]==inp[j]):
                
                n+=1
            else:
                break
        if(g>='a' and g<='z'):
            g=g.upper()
        else:
            g=g.lower()

        string += g
        i=i+n
    
        
    print(string[len(string)::-1])
Question_4()