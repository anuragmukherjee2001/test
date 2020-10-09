height = int(input("Give The value of the height"))

def Change_inch(height):
    i = height * 0.3937
    print("The height in inches is ", i)

def Change_feet(height):
    f = 0.032 * height
    print("The height in feet is ", f)


Change_feet(height)
Change_inch(height)