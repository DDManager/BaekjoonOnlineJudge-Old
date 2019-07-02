/**
 *  BOJ 11050번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 262,144 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void) {
	int n,k,l,r=1;
	scanf("%d %d",&n,&k);
	k=k<n-k?k:n-k;
	for(l=1;l<=k;l++) r*=n-l+1,r/=l;
	printf("%d\n",r);
	return 0;
}