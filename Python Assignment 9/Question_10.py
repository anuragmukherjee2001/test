import numpy as np
from scipy import stats

array = []
n = int(input("Enter the number of elements: "))


for i in range(0, n):
    ele = int(input())

    array.append(ele)
np_array = np.array(array)

print(np_array)

mean = np.mean(np_array)
median = np.median(np_array)
mode = int(stats.mode(np_array)[0])

print("The mean is: ", mean)
print("The median is: ", median)
print("The mode is: ", mode)
