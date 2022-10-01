# https://leetcode.com/problems/fizz-buzz/

class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        answer = []
        for i in range(1, n+1):
            ans = ''
            if i % 3 == 0:
                ans += "Fizz"
            if i % 5 == 0:
                ans += "Buzz"
                
            if ans != '':
                answer.append(ans)
            else:
                answer.append(str(i))
        return answer
