/**
 *  BOJ 1932번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,608 KB / 131,072 KB
 *  소요 시간 : 16 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int *DP,N,M=0;
	int i,j,c;
	scanf("%d",&N);
	DP=(int*)calloc((N*N+N)/2,sizeof(int));
	for(i=0;i<(N*N+N)/2;i++) scanf("%d",&DP[i]);
	for(i=1;i<N;i++){
		for(j=(i*i+i)/2,c=0;c<=i;j++,c++){
			int M1=(i==c)?0:DP[j]+DP[j-i];
			int M2=(c>0)?DP[j]+DP[j-i-1]:0;
			DP[j]=M1>M2?M1:M2;
		}
	}
	for(i=(N*N-N)/2;i<(N*N+N)/2;i++){
		if(DP[i]>M) M=DP[i];
	}
	printf("%d\n",M);
	free(DP);
	return 0;
}
