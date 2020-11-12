def Q1func():
    print()
    print()
    print('Executing question 1')
    ak=input("ENTER STRING ")
    d=0
    s=0
    a=0
    for i in ak:
        if(i.isalpha()):
            a+=1
        elif(i.isdigit()):
            d+=1
        else:
            s+=1
    print('No of alphabate',a)
    print('No of digit',d)
    print('No of special characters',s)
def Q1():
    print()
    print()
    print('Executing question 1')
    ak=input("ENTER STRING ")
    ak=ak.lower()
    
    
    d=0
    s=0
    a=0
    for i in ak:
        if(i<='z' and i>='a'):
            a+=1
        elif(i<='9' and i>='0'):
            d+=1
        else:
            s+=1
            
    print('No of alphabate',a)
    print('No of digit',d)
    print('No of special characters',s)
Q1()
Q1func()
def Q2():
    print()
    print()    
    print('Executing question 2')
    a=input("Enter string ")
   
    print(a)
    v=0
    c=0
    for i in a:
        if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u'):
            v+=1
        elif(i.isalpha()):
            c+=1
    print('no of vowels',v)
    print('no of consonents',c)
Q2()    

def Q3():
    print()
    print()    
    print('Executing question 3')
    a=input("Enter string ")
    t=0
    c=0
    s=""
    i=0
    
    while(i!=len(a)):
        g=a[i]
        t=c
        n=0        
        for j in range(i,len(a)):
            if(a[i]==a[j]):
                
                n+=1
            else:
                break
        if(g>='a' and g<='z'):
            g=g.upper()
        else:
            g=g.lower()

        s+=g+str(n)
        i=i+n
    print(s)

Q3()

def Q4():
    print()
    print()
    print('Executing question 4')
    a=input("Enter string ")
    t=0
    c=0
    s=""
    i=0
    f=''
    while(i!=len(a)):
        g=a[i]
        t=c
        n=0        
        for j in range(i,len(a)):
            if(a[i]==a[j]):
                
                n+=1
            else:
                break
        if(g>='a' and g<='z'):
            g=g.upper()
        else:
            g=g.lower()

        s+=g
        i=i+n
    
        
    print(s[len(s)::-1])
Q4()
def Q5():
    print()
    print()    
    print('Executing question 5')
    a1=input("Enter string1 ")
    a2=input("Enter string2 ")
    a3=input("Enter string3 ")
    A1=""
    for i in a1:
        if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u' or i=='A' or i=='E' or i=='I' or i=='O' or i=='U'):
            A1+='$'
        else:
            A1+=i
    print(A1)
    A2=""
    for i in a2:
        if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u' or i=='A' or i=='E' or i=='I' or i=='O' or i=='U'):
            A2+=i
        else:
            A2+='*'
    print(A2)
    A3=""
    for i in a3:
        A3+=i.lower()
    print(A3)
Q5()