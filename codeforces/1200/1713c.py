import sys
getline = sys.stdin.readline
 
def read_int():
    return int(getline())
 
def read_ints():
    return list(map(int, getline().split()))
 
def read_s():
    return str(getline().strip())
 
def read_ss():
    return list(map(str, getline().strip().split()))


from itertools import permutations
import math

def perf_sq(num):
    sqrt_num = math.sqrt(num)
    return sqrt_num.is_integer()

for i in range(20):
    l = [x for x in range(0, i)]
    all_perms = list(permutations(l))
    for perm in all_perms:
        cond = 1
        for i in range(len(perm)):
            if not perf_sq((perm[i] + i)):
                cond = 0
                break
        
        if cond:
            print(perm)
































































