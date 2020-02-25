##
#  BOJ 2941번 Python 3 소스 코드
#  작성자 : 동동매니저 (DDManager)
#
#  ※ 실행 결과
#  사용 메모리 : 32,876 KB / 294,912 KB
#  소요 시간 : 112 ms / 5,000 ms
#
#  Copyright 2020. DDManager all rights reserved.
##

import re
print(len(re.sub("(dz=|c=|c-|d-|lj|nj|s=|z=)","0",input())))