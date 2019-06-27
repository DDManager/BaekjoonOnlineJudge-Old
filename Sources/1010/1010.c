/**
 *  BOJ 1010번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

void C(int,int);

int main(void) {
	int T,N,M,i;
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d %d",&N,&M);
		C(N,M);
	}
	return 0;
}

void C(int N,int M) {
	int v=1,l;
	if(M-N<N) N=M-N;
	for(l=1;l<=N;l++){
		v*=M-l+1;
		v/=l;
	}
	printf("%d\n",v);
}