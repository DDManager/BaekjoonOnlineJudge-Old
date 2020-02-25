/**
 *  BOJ 2440번 C언어 소스 코드
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
	int n,i,j;
	scanf("%d",&n);
	for(i=n;i>0;i--){
		for(j=1;j<=i;j++) printf("*");
		puts("");
	}
	return 0;
}