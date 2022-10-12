def _square(num):
    return num * num

# 동일한 기능을 하는 lambda 함수
square = (lambda x: x*x)

'''
string이 빈 문자열일 경우 빈 문자열을, 아니면 첫 번째 글자를 리턴합니다.
'''
def _first_letter(string):
    return string[0] if string else ''
  
# 동일한 기능을 하는 lambda 함수
first_letter = lambda string: string[0] if string else ''


# assert를 이용하여 두 함수의 기능이 동일한지 테스트
testcases1 = [3, 10, 7, 1, -5]
for num in testcases1:
    assert(_square(num) == square(num))

testcases2 = ['', 'hello', 'elice', 'abracadabra', '  abcd  ']
for string in testcases2:
    assert(_first_letter(string) == first_letter(string))
    
# 모두 
print("성공했습니다!")
