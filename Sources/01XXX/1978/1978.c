/**
 *  BOJ 1978번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int is_prime(int x){
	int i;
	if(x==1) return 0;
	if(x==2) return 1;
	for(i=2;i*i<=x;i++){
		if(x%i==0) return 0;
	}
	return 1;
}

int main(void){
	int N,X,i,cnt=0;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&X);
		if(is_prime(X)) cnt++;
	}
	printf("%d\n",cnt);
	return 0;
}