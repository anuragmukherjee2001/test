import matplotlib.pyplot as plt
import numpy

name = []
point = []

n = int(input("Enter the number of points: "))

for i in range(n):
    inp1 = input("Enter the name: ")
    inp2 = int(input("Enter the point: "))
    name.append(inp1)
    point.append(inp2)

plt.bar(name, point)   
plt.show() 
    