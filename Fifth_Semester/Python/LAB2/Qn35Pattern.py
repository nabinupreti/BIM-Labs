"""
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
"""
for i in range(1,6):
    for j in range(i):
        print(j+1, end = " ")
    print()

    
"""
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
"""
for i in range (1,6):
    for j in range (i):
        print(i,end = " ") 
    print()
    
"""
1 
1 0 
1 0 1 
1 0 1 0 
1 0 1 0 1 
"""
for i in range(1,6):
    for j in range (i):
        if j % 2 == 0:
            print(1, end = " ")
        else:
            print(0, end = " ")
    print()
    
"""
a 
a b 
a b c 
a b c d 
a b c d e 
"""
   
for i in range(1,6):  
    for j in range(i):  
        pattern = ''.join([chr(65 + j)]) 
        print(pattern, end = " ")
        
    print()
    
"""
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 
"""

for i in range (1,6):
    for j in range (6-i):
        print(j+1, end = " ")
    print()

"""
5 5 5 5 5 
4 4 4 4 
3 3 3 
2 2 
1 
"""
for i in range (5):
    for j in range (5-i):
        print(5-i, end = " ")
    print()
    
"""
A B C D E 
A B C D 
A B C 
A B 
A
"""

for i in range(5):
    for j in range(5-i):
        pattern = ''.join([chr(65 + j)])
        print(pattern, end = " ")
    print()
    
