/**
 *  BOJ 2577번 C언어 소스 코드
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
	int a,b,c,r,l,d[10]={0},i;
	scanf("%d %d %d",&a,&b,&c);
	r=a*b*c;
	for(l=1;l<=r;l*=10) d[r/l%10]++;
	for(i=0;i<10;i++) printf("%d\n",d[i]);
	return 0;
}