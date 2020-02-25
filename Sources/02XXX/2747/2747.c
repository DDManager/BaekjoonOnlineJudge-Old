/**
 *  BOJ 2747번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int fib(int n){
	int a=0,b=1,tmp,i;
	if(n==0) return 0;
	if(n==1) return 1;
	for(i=0;i<n-1;i++){
		tmp=b;
		b=a+b;
		a=tmp;
	}
	return b;
}

int main(void){
	int n;
	scanf("%d",&n);
	printf("%d\n",fib(n));
	return 0;
}