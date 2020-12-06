def permutations(lst, n): 
      
    if n == 0: 
        return [[]] 
      
    lst1 =[] 
    for i in range(0, len(lst)): 
          
        lst2 = lst[i] 
        remaining_list = lst[i + 1:] 
          
        for i in permutations(remaining_list, n-1): 
            lst1.append([lst2]+i) 
              
    return lst1 
   

lst1 = [1, 2, 3]
print(permutations([x for x in lst1], 2)) 