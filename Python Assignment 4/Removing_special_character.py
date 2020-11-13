def remove_spl_character(string):
    lst = list(string)
    for i in lst:
        lst_spl = [1,2,3,4,5,6,7,8,9,0,'!','@','#','$','%']
        if i in lst_spl:
            lst.remove(i)

        else:
            lst.append(i)

    print(lst)

string = input("Enter the first string ")  
remove_spl_character(string)          
