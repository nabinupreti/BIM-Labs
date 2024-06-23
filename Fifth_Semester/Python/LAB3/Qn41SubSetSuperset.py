#Check if one set is a subset, superset of another
s1 = {1, 2, 3}
s2 = {1, 2, 3, 4, 5}

# Check if s1 is a subset of s2
is_subset = s1.issubset(s2)
print("Is s1 a subset of s2?", is_subset)

# Check if s2 is a superset of s1
is_superset = s1.issuperset(s2)
print("Is s1 a superset of s2?", is_superset)
