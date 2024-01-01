
''' 
remove all instances of val from arr (in-place)
let k = num of elements not equal to val
return k 
modify arr such that the first k elements are not val
'''
class Solution:
    '''
    two pointers
    swap arr[l] == val with arr[r] != val
    after, count number of elements != val
    return the count as k
    '''
    def solve(self, arr, val):
        if (len(arr) == 0):
            return 0

        l, r = 0, len(arr) - 1
        while (l < r):
            if (arr[r] == val):
                r -= 1
                continue
            if (arr[l] != val):
                l += 1
                continue

            arr[l], arr[r] = arr[r], arr[l]

        k = 0
        for ele in arr:
            if ele == val:
                break
            k += 1

        return k


    '''
    iterate over the array from right to left
    if an element is not val, move it to the front
    conveniently, the index used to maintain the start index can be used as the counter
    '''
    def solve2(self, arr, val):
        k = 0
        for i in range(len(arr)):
            if (arr[i] != val):
                arr[k] = arr[i]
                k += 1
        return k




