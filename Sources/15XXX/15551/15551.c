/**
 *  BOJ 15551번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 524,288 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++) putchar('>');
	puts("");
	for(i=2;i<n;i++) putchar('>');
	puts("=]");
	return 0;
}