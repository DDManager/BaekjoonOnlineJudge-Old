/**
 *  BOJ 11726번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,112 KB / 262,144 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>
#define MOD 10007

int main(void){
	int N;
	int *A;
	int i;
	scanf("%d",&N);
	A=(int*)calloc(N+1,sizeof(int));
	A[0]=A[1]=1;
	if(N>1) for(i=2;i<=N;i++) A[i]=(A[i-2]+A[i-1])%MOD;
	printf("%d\n",A[N]);
	return 0;
}