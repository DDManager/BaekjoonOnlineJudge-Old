/**
 *  BOJ 2839번 C언어 소스 코드
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
	int n,r=-1;
	scanf("%d",&n);
	if(n%5==0) r=n/5;
	else if(n%5==1) r=n/5+1;
	else if(n%5==2&&n>7) r=n/5+2;
	else if(n%5==3) r=n/5+1;
	else if(n%5==4&&n>4) r=n/5+2;
	printf("%d\n",r);
	return 0;
}