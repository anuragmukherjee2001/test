import sqrt


def prime(num):
    if(num > 1):
        for i in range(2, int(sqrt.find_sqrt(num)) + 1):
            if(num % i) == 0:
                return False
        else:
            return True
