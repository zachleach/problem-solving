class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        cache = [cost[0], cost[1]]
        
        n = len(cost)
        for i in range(2, n):
            cache.append(cost[i] + min(cache[i-1], cache[i-2]))
        
        return min(cache[n-1], cache[n-2])
