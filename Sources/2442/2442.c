/**
 *  BOJ 2442번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int N,i,j;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		for(j=0;j<N-i;j++) putchar(' ');
		for(j=0;j<i*2-1;j++) putchar('*');
		puts("");
	}
	return 0;
}