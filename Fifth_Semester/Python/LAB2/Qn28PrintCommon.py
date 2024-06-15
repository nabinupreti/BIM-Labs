# Define the lists
list1 = ["apple", "banana", "orange", "kiwi"]
list2 = ["banana", "kiwi", "grape", "apple"]

# Initialize index counters
index1 = 0
index2 = 0

# Create a list to store common elements
common_elements = []

# Sort both lists (to make the comparison efficient if needed)
list1.sort()
list2.sort()

# Loop through both lists to find common elements
while index1 < len(list1) and index2 < len(list2):
    if list1[index1] == list2[index2]:
        common_elements.append(list1[index1])
        index1 += 1
        index2 += 1
    elif list1[index1] < list2[index2]:
        index1 += 1
    else:
        index2 += 1
else:
    if common_elements:
        print("Common elements:", common_elements)
    else:
        print("No common elements found")

# Output: Common elements: ['apple', 'banana', 'kiwi']
