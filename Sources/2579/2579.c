/**
 *  BOJ 2579번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int M1,M2,M,C;
}Stair;

int main(void){
	int *D,N,i;
	Stair *DP;
	scanf("%d",&N);
	D=(int*)calloc(N,sizeof(int));
	DP=(Stair*)calloc(N,sizeof(Stair));
	for(i=0;i<N;i++) scanf("%d",&D[i]);
	DP[0].M1=D[0];
	DP[0].M2=0;
	DP[0].M=D[0];
	DP[0].C=0;
	for(i=1;i<N;i++){
		DP[i].M1=(DP[i-1].C?DP[i-1].M2:DP[i-1].M)+D[i];
		DP[i].M2=((i>1)?DP[i-2].M:0)+D[i];
		if(DP[i].M1<DP[i].M2){
			DP[i].M=DP[i].M2;
			DP[i].C=0;
		}else{
			DP[i].M=DP[i].M1;
			DP[i].C=1;
		}
	}
	printf("%d\n",DP[N-1].M);
	free(D);
	free(DP);
	return 0;
}
