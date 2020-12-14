def Question_6():

    a=input("Enter string ")

    string=""
    i=0
    
    while(i!=len(a)):
        arr=a[i]

        n=0        
        for j in range(i,len(a)):
            if(a[i]==a[j]):               
                n+=1
            else:
                break
        if(arr>='a' and arr<='z'):
            arr=arr.upper()
        else:
            arr=arr.lower()

        string += arr+str(n)
        i=i+n
    print(string)

Question_6()