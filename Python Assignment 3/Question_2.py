def with_function():
 
    a=input("Enter the string ")
   
    print(a)
    vowels = 0
    consonant = 0
    for i in a:
        if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u'):
            vowels += 1
        elif(i.isalpha()):
            consonant += 1
    print('no of vowels',vowels)
    print('no of consonents',consonant)

def without_func():
 
    a=input("Enter the string ")
   
    print(a)
    vowels = 0
    consonant = 0
    for i in a:
        if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u'or i=='A' or i=='E' or i=='I' or i=='O' or i=='U'):
            vowels += 1
        else:
            consonant += 1
    print('no of vowels',vowels)
    print('no of consonents',consonant)

with_function()  
# without_func()  