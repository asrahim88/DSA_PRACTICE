#                     first way 
'''fib2 = 0
fib1 = 1
print(fib2, fib1, end=" ")
for i in range(18):
    newFib = fib1 + fib2
    print(newFib, end=" ")
    fib2 = fib1
    fib1 = newFib
'''
#                      second way 

'''
print(0, 1, end=" ")
count = 2

def fibonacci(prev1, prev2):
    global count
    if count<=19:
        newFib = prev1 + prev2
        print(newFib, end=" ")
        prev2 = prev1
        prev1 = newFib
        count +=1
        
        fibonacci(prev1, prev2)
    else:
        return 

fibonacci(1, 0)
'''

#                         3rd way

#  get nth fibonacci number

def fibonacci(n):
    if n<=1:
        return n
    else:
        return fibonacci(n-1) + fibonacci(n-2)
print(fibonacci(19))