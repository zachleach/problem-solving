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

def sum_digits(x):
	ans = 0
	while x:
		ans += x % 10
		x //= 10
	return ans

n = 2 * 10**5
dp = [x for x in range(1, n + 1)]

for i in range(n):
	dp[i] = sum_digits(dp[i])

for i in range(1, n):
    dp[i] = dp[i - 1] + dp[i]

tt = read_int()
for _ in range(tt):
    n = read_int()
    print(dp[n - 1])

