#  no of items 4, 
#  w = [40,10,20, 24]
#  p= [280,100,120,120]
#  profit = 440
#  capacity = 60


def knapsack(profit, weight, capacity):

    index = list(range(len(profit)))
    # print(index)

    ratio = [p/w for p, w in zip(profit, weight)]
    # print(ratio)

    index.sort(key=lambda i: ratio[i], reverse=True)
    # print(index)
 
    max_profit = 0
    
    for i in index:
        if weight[i] <= capacity:
            
            max_profit += profit[i]
            capacity -= weight[i]
        else:            
            max_profit += profit[i]*capacity/weight[i]
            break
 
    return max_profit
 
 
n = int(input('Enter number of items: '))
print("Enter the profit values: ")
profit = []

for i in range(n):
    inp = int(input())
    profit.append(inp)
    
print("Enter the weight values: ")
weight = []

for i in range(n):
    inp = int(input())
    weight.append(inp)

capacity = int(input('Enter maximum Capacity: '))
 
max_profit = knapsack(profit, weight, capacity)
print('The maximum profit of items that can be carried:', max_profit)