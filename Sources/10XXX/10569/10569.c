/**
 *  BOJ 10569번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 262,144 KB
 *  소요 시간 : 0 ms / 5,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void) {
	int n,v,e,l;
	scanf("%d",&n);
	for(l=0;l<n;l++){
		scanf("%d %d",&v,&e);
		printf("%d\n",e-v+2);
	}
	return 0;
}