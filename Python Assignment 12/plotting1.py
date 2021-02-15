import matplotlib.pyplot as plt
import numpy
import time

x1 = int(input("give the value of x1: "))
x2 = int(input("give the value of x2: "))
y1 = int(input("give the value of y1: "))
y2 = int(input("give the value of y2: "))

start = time.time()

x_c = [x1, x2]
y_c = [y1, y2]

plt.plot(x_c, y_c, color = "red", linestyle = "dotted")

plt.title("voltage vs current")

plt.xlabel("Voltage")
plt.ylabel("current")

end = time.time()
print(end - start)

plt.show()