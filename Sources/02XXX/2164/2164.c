/**
 *  BOJ 2164번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,112 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int N;
	int i;
	scanf("%d",&N);
	for(i=1;i<N;i*=2);
	printf("%d\n",N==1?1:(N-i/2)*2);
	return 0;
}