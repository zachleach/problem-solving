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
import copy

def func(n):
    perms = list(permutations(range(1, n + 1)))
    perms = [list(p) for p in perms]
    perms = [p for p in perms if p[0] == n]

    a = copy.deepcopy(perms)

    for i in range(len(a)):
        for j in range(len(a[i])):
            if j == 0: continue
            a[i][j] = a[i][j] + a[i][j-1]

    b = copy.deepcopy(a)

    for i in range(len(a)):
        for j in range(len(a[i])):
            b[i][j] = b[i][j] % n

    s = [set(perm) for perm in b]

    for i in range(len(s)):
        if len(s[i]) == n:
            print(perms[i], a[i], b[i])
    print()

func(8)




























































