#demonstrate tuple are immutable by triying to update elements in tuple
tpl = (1, 2, 3)
print("Original tuple:",tpl)
try:
    tpl[0] = 10
except TypeError as e:
    print("Error:",e)
    
    