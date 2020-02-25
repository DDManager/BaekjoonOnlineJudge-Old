/**
 *  BOJ 10989번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,112 KB / 8,192 KB
 *  소요 시간 : 2,352 ms / 3,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int N;
	int A[10001]={0};
	int i,j;
	scanf("%d",&N);
	while(N--){
		int read;
		scanf("%d",&read);
		A[read]++;
	}
	for(i=0;i<=10000;i++) for(j=0;j<A[i];j++) printf("%d\n",i);
	return 0;
}