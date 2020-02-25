/**
 *  BOJ 2399번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 44 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	long long answer=0;
	int n,i,j;
	int *x;
	scanf("%d",&n);
	x=(int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			answer+=abs(x[i]-x[j]);
		}
	}
	printf("%lld\n",answer*2);
	return 0;
}