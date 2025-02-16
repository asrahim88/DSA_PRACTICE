#                     Min value from the array 

# my_array = [8,4,5,6,89,4,5]
# minValue = my_array[0]

# for i in my_array:
#     if i < minValue:
#         minValue = i
# print(minValue)

#                   Max value from the array

my_array = [8,4,5,6,89,4,5]
maxValue = my_array[0]

for i in range(0, len(my_array)):
    if my_array[i] > maxValue:
        maxValue = my_array[i]
        
print(maxValue)