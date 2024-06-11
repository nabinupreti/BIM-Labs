#finding sum of odd and even number from 1-100
odd = 0
even = 0

for i in range(1,101):
    if i % 2 == 0:
        even += i
    else:
        odd += i
    
print(i)
print("sum of odd numbers from 1 to 100 is ",odd)
print("sum of even numbers from 1 to 100 is ",even)


