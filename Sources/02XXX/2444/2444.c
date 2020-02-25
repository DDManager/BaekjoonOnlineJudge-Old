/**
 *  BOJ 2444번 C언어 소스 코드
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
	int N,i,j,s,f=1;
	scanf("%d",&N);
	s=N;
	for(i=1;i<N*2;i++){
		if(s&&f) s--;
		else{
			s++;f=0;
		}
		for(j=0;j<s;j++) putchar(' ');
		for(j=0;j<(N-s)*2-1;j++) putchar('*');
		puts("");
	}
	return 0;
}