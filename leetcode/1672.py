# https://leetcode.com/problems/richest-customer-wealth/

class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        max_w = 0
        for i in range(len(accounts)):
            if max_w < sum(accounts[i]):
                max_w = sum(accounts[i])
        return max_w
