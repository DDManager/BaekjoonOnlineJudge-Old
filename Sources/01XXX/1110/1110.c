/**
 *  BOJ 1110번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int n,t,c=0;
	scanf("%d",&n);
	t=n;
	do{
		t=((t/10)+(t%10))%10+(t%10*10);
		c++;
	}while(n!=t);
	printf("%d\n",c);
	return 0;
}