/**
 *  BOJ 2675번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <string.h>

int main(void){
	int T;
	scanf("%d",&T);
	while(T--){
		int R,i,j;
		char S[21];
		scanf("%d %s",&R,S);
		for(i=0;i<strlen(S);i++) for(j=0;j<R;j++) putchar(S[i]);
		puts("");
	}
	return 0;
}