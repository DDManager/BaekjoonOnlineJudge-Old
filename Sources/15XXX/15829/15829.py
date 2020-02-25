##
#  BOJ 15829번 Python 3 소스 코드
#  작성자 : 동동매니저 (DDManager)
#
#  ※ 실행 결과
#  사용 메모리 : 29,284 KB / 1,081,344 KB
#  소요 시간 : 60 ms / 5,000 ms
#
#  Copyright 2020. DDManager all rights reserved.
##

input()
S=input()
H=0
G=1
for i in S:
	H+=(ord(i)-96)*G
	G*=31
print(H%1234567891)