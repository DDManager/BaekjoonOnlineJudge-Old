/**
 *  BOJ 10707번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 262,144 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int a,b,c,d,p,costx,costy;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&p);
	costx=a*p;
	costy=b;
	if(p>c) costy+=d*(p-c);
	printf("%d\n",costx<costy?costx:costy);
	return 0;
}