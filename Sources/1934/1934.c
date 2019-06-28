/**
 *  BOJ 1934번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int gcd(int a,int b){
	int c,max,min;
	max=a>b?a:b;
	min=a>b?b:a;
	while(min){
		c=max%min;
		max=min;
		min=c;
	}
	return max;
}

int main(void){
	int a,b,t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&a,&b);
		printf("%d\n",a*b/gcd(a,b));
	}
	return 0;
}