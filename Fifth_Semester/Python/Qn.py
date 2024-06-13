# # '''fruits=("apple","banana","cherry","grapes")
# # if "apple" in fruits:
# #     print("Apple is in fruits ")
# # else:
# #     print("Apple is not fruits")'''
    
# # #fruits=["apple","banana","cherry","grapes"]
# # #print(fruits)
# # #print(fruits[1])
# # #print(fruits[::-1])

# # '''def RohanChor(x,y):
# #     add= x+y
# #     return add


# # print(f" Sumis ", RohanChor(5,6))
# # '''

# # num=int(input("Enter the number "))
# # n=num
# # sum=0
# # rev=0
# # while n>0:
# #     rem=n%10
# #     sum+=rem**3
# #     rev=rev*10+rem
# #     n=n//10

# # if rev == num:
# #     print ("NUMBER IS PALLINDROME")
# # else:
# #     print ("NUMBER IS NOT PALLINDROME")

# # if sum == num:
# #     print ("NUMBER IS ARMSTRONG")
# # else:
# #     print ("NUMBER IS NOT ARMSTRONG")

# for i in range(5):
#     for j in range(i+1):
#         print("*", end=" ")
#     print()

def reverse_string(s):
    reversed_s = ''
    for char in s:
        print(char)
        reversed_s = char + reversed_s
    return reversed_s

# Example usage:
result = reverse_string("hello")
print(result)  # Output: "olleh"
