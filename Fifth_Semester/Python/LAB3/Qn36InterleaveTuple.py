#Interleave two tuples, alternating elements from each tuple
def interleave_tuples(t1, t2):
    result = ()
    for i in range(max(len(t1), len(t2))):
        if i < len(t1):
            result += (t1[i],)
            if i < len(t2):
                result += (t2[i],)
        else:
            result += (t2[i],)
    return result
    
#Test the function
t1 = (1, 2, 3)
t2 = ('a', 'b', 'c', 'd')
print(interleave_tuples(t1, t2))  