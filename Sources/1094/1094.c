/**
 *  BOJ 1094번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int X,N=0,i;
	scanf("%d",&X);
	for(i=1;i<=X;i*=2) if((X/i)%2) N++;
	printf("%d\n",N);
	return 0;
}
