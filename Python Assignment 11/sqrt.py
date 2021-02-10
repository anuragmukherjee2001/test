import absolute


def find_sqrt(n):
    x = 1
    while True:
        a = x
        x = (x * x + n)/(2 * x)
        b = x
        if(absolute.absolute(b - a) <= 0.00001):
            break
        return b


# print(find_sqrt(16))
