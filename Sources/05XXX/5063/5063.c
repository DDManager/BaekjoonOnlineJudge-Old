/**
 *  BOJ 5063번 C언어 소스 코드
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
	int n,r,e,c,l;
	scanf("%d",&n);
	for(l=0;l<n;l++){
		scanf("%d %d %d",&r,&e,&c);
		if(e-c>r) puts("advertise");
		else if (e-c<r) puts("do not advertise");
		else puts("does not matter");
	}
	return 0;
}