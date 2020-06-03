class Solution:
    def twoCitySchedCost(self, costs: List[List[int]]) -> int:
        sort_costs = sorted(costs,key = lambda x:x[0]-x[1])
        sum1 = 0 
        for i in range(len(costs)):
            if i < len(costs) / 2:
                sum1 += sort_costs[i][0]
            else:
                sum1 += sort_costs[i][1]
        return sum1
