/**
 *  BOJ 9095번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int C123(int n){
	int a0=1,a1=1,a2=2,tmp,i;
	if(n<1) return 0;
	if(n==1) return 1;
	if(n==2) return 2;
	for(i=3;i<n;i++){
		tmp=a0+a1+a2;
		a0=a1;
		a1=a2;
		a2=tmp;
	}
	return a0+a1+a2;
}

int main(void){
	int T;
	scanf("%d",&T);
	while(T--){
		int N;
		scanf("%d",&N);
		printf("%d\n",C123(N));
	}
	return 0;
}