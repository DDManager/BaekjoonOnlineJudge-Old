/**
 *  BOJ 2581번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int is_prime(int x){
	int i;
	if(x<2) return 0;
	if(x==2) return 1;
	if(x%2==0) return 0;
	for(i=3;i*i<=x;i+=2) if(x%i==0) return 0;
	return 1;
}

int main(void){
	int M,N;
	int sum=0,min=0;
	int i;
	scanf("%d",&M);
	scanf("%d",&N);
	for(i=M;i<=N;i++){
		if(is_prime(i)){
			if(sum==0) min=i;
			sum+=i;
		}
	}
	if(sum==0) puts("-1");
	else printf("%d\n%d\n",sum,min);
	return 0;
}