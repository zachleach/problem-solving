''' 
given a sorted array size n = 10e4
let k be the number of unique elements in arr
modify the array such that the first k elements contain no duplicates
return k

helper data structures (e.g., sets) are not allowed
'''
class Solution:
    def solve(self, nums):
        k = 0
        for i in range(len(arr)):
            if (arr[i] != arr[k]):
                k += 1
                arr[k] = arr[i]
        return k + 1

test = Solution()

arr = [1, 1, 2, 2, 3, 3]
k = test.solve(arr)

print(arr)
print(k)
