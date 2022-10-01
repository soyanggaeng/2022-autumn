# https://leetcode.com/problems/reverse-integer/

class Solution:
    def reverse(self, x: int) -> int:
        x_str = str(x)
        answer = 0
        if x_str[0] == '-':
            answer += (-1)*int(x_str[1])
            for i in range(2, len(x_str)):
                answer -= int(x_str[i])*(10**(i-1))
        else:
            for i in range(len(x_str)):
                answer += int(x_str[i])*(10**i)
        if answer < -2**31 or answer > 2**31-1:
            return 0
        return answer
            
