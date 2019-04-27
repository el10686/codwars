from functools import reduce
from operator import mul

def grow(arr):
    return reduce(mul, arr, 1)
