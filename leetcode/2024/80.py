#!/bin/python3

# 2024.01.05, by @zachleach
def solve(arr):
    n = len(arr)
    l, k = 0, 0
    while (l < n): 
        val = arr[l]
        r = l
        while (r < n) and (arr[l] == arr[r]):
            r += 1
        cnt = min(r - l, 2)
        for i in range(cnt):
            arr[k + i] = val
        l += (r - l)
        k += cnt

    return k

# 2023.10.26, by @stefanpochmann
def removeDuplicates(nums):
    i = 0
    for n in nums:
        if (i < 2) or (n != nums[i - 2]):
            nums[i] = n
            i += 1
    return i

