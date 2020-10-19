while True:
    try:
        age = int(input("Enter the age "))
        break

    except:
        print("Please enter an integer age")
if(age == 1):
    print("in born")

elif(age >= 2 and age <= 10):
    print("child")

elif(age > 10 and age < 18):
    print("Young")

elif(age > 17 and age < 50):
    print("adult")

elif(age > 49 and age < 80):
    print("old")

elif(age > 80):
    print("Very old")                    