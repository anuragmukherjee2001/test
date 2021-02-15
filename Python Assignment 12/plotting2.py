import matplotlib.pyplot as plt
import numpy
import time
x1 = int(input("give the value of x1: "))
x2 = int(input("give the value of x2: "))
y1 = int(input("give the value of y1: "))
y2 = int(input("give the value of y2: "))

start = time.time()

dx = x2 - x1
dy = y2 - y1
m = dy/dx

plt.plot(x1, y1, 'o')
x = x1
y = y1

while(x < x2):
    x = x + 0.01
    y = y + m * dx
    plt.plot(x,y,'o')

end = time.time()
print(end - start)

plt.show()    