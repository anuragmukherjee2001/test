def With_func():

    ak=input("ENTER THE STRING ")
    digit = 0
    special = 0
    alphabet = 0
    for i in ak:
        if(i.isalpha()):
            alphabet+= 1
        elif(i.isdigit()):
            digit+= 1
        else:
            special+= 1
    print('No of alphabet',alphabet)
    print('No of digit',digit)
    print('No of special characters',special)

def without_func():
    print()
    print()
    print('Executing question 1')
    ak=input("ENTER STRING ")
    ak=ak.lower()
    
    
    digit =0
    special = 0
    alphabet =0
    for i in ak:
        if(i<='z' and i>='a'):
            alphabet+=1
        elif(i<='9' and i>='0'):
            digit+=1
        else:
            special+=1
            
    print('No of alphabate',alphabet)
    print('No of digit',digit)
    print('No of special characters',special)

without_func() 
With_func()   