def Frequency(lst): 
   
    frequency = {} 
    for i in lst: 
        if (i in frequency): 
            frequency[i] += 1
        else: 
            frequency[i] = 1
  
    for key, value in frequency.items(): 
        print (key,":", value) 

print("Enter the of number of elements")
n = int(input())

lst = list()

for i in range(n):
    inp = input()
    lst.append(inp)
  
Frequency(lst)