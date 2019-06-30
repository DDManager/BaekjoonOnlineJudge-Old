/**
 *  BOJ 2869번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 150 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int r(int n,int d){
	int r=n/d;
	if(n%d) r++;
	return r;
}

int main(void){
	int a,b,v;
	scanf("%d %d %d",&a,&b,&v);
	printf("%d\n",r(v-a,a-b)+1);
	return 0;
}