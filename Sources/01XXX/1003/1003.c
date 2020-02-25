/**
 *  BOJ 1003번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 250 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

void fibonacci(int,int*,int*);
void p_result(int);

int main(void){
	int T,i,n;
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d",&n);
		p_result(n);
	}
	return 0;
}

void fibonacci(int n,int *a,int *b){
	int i,t;
	if(n==0){
		(*a)++;
	}else if(n==1){
		(*b)++;
	}else{
		*a=1;
		*b=1;
		for(i=2;i<n;i++){
			t=*a+*b;
			*a=*b;
			*b=t;
		}
	}
}

void p_result(int n){
	int a=0,b=0;
	fibonacci(n,&a,&b);
	printf("%d %d\n",a,b);
}