class ListConcat:
    def __init__(self, lst):
        self.lst = lst
    
    def __add__(self, other):
        return ListConcat(self.lst + other.lst)
    
    def __repr__(self):
        return f"ListConcat({self.lst})"

# Example usage
l1 = ListConcat([1, 2, 3])
l2 = ListConcat([4, 5, 6])
result = l1 + l2
print(result)  # Output: ListConcat([1, 2, 3, 4, 5, 6])