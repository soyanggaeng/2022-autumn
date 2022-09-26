# JSON = JavaScript Object Notation
# 딕셔너리와 유사 : loads()로 딕셔너리로 / dumps()로 json으로 => 활용해볼 것
# 웹 환경에서 데이터를 주고 받는 가장 표준적인 방식
# 키를 이용하여 원하는 데이터만 빠르게 추출 가능
# 데이터가 쉽게 오염되지 않음
# 다른 포맷에 비해 용량이 조금 큰 편

# json 패키지를 임포트합니다.
import json

#JSON 파일을 읽고 문자열을 딕셔너리로 변환합니다.
def create_dict(filename):
    with open(filename) as file:
        json_string = file.read()
        
        # 함수를 완성하세요.
        return json.loads(json_string)

#JSON 파일을 읽고 딕셔너리를 JSON 형태의 문자열로 변환합니다.
def create_json(dictionary, filename):
    with open(filename, 'w') as file:
        # 함수를 완성하세요.
        json_string =  json.dumps(dictionary)
        file.write(json_string)
