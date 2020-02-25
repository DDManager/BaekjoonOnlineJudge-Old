/**
 *  BOJ 2445번 C언어 소스 코드
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
	int N,b,i,j;
	scanf("%d",&N);
	for(i=1,b=2*N-2;i<=N;i++,b-=2){
		for(j=0;j<i;j++) putchar('*');
		for(j=0;j<b;j++) putchar(' ');
		for(j=0;j<i;j++) putchar('*');
		puts("");
	}
	for(i=N-1,b=2;i>0;i--,b+=2){
		for(j=0;j<i;j++) putchar('*');
		for(j=0;j<b;j++) putchar(' ');
		for(j=0;j<i;j++) putchar('*');
		puts("");
	}
	return 0;
}