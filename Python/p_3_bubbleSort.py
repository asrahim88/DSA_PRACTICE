my_array = [64, 34, 25, 12, 22, 11, 90, 5]

for i in range(len(my_array)-1):
    swapped = False
    for j in range(len(my_array)-i-1):
        if my_array[j] > my_array[j+1]:
            my_array[j], my_array[j+1] = my_array[j+1], my_array[j]
            swapped = True
    if not swapped:
        break
print(my_array)