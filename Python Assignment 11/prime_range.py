import prime as p

f1 = open('output.txt', 'w')

f2 = open('input.txt', 'r')
n1 = f2.readline()
n2 = f2.readline()

f1.write("The prime numbers within the range are: \n")

for i in range(int(n1), int(n2)):
    if p.prime(i):
        f1.write(str(i))
        f1.write("\n")

f1.close()