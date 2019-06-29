/**
 *  BOJ 2740번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 4 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int N,M,K,i,j,p,**A,**B,Cij;
	scanf("%d %d",&N,&M);
	A=(int**)calloc(N,sizeof(int*));
	for(i=0;i<N;i++){
		A[i]=(int*)calloc(M,sizeof(int));
		for(j=0;j<M;j++) scanf("%d",&A[i][j]);
	}
	scanf("%d %d",&M,&K);
	B=(int**)calloc(M,sizeof(int*));
	for(i=0;i<M;i++){
		B[i]=(int*)calloc(K,sizeof(int));
		for(j=0;j<K;j++) scanf("%d",&B[i][j]);
	}
	for(i=0;i<N;i++){
		for(j=0;j<K;j++){
			Cij=0;
			for(p=0;p<M;p++) Cij+=A[i][p]*B[p][j];
			printf(j?" %d":"%d",Cij);
		}
		puts("");
	}
	for(i=0;i<N;i++) free(A[i]);
	free(A);
	for(i=0;i<M;i++) free(B[i]);
	free(B);
	return 0;
}