/**
 *  BOJ 15969번 C언어 소스 코드
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
	int m=1000,M=0,N,s,i;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&s);
		if(s<m) m=s;
		if(s>M) M=s;
	}
	printf("%d\n",M-m);
}