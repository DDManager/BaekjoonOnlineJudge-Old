/**
 *  BOJ 1026번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a,const void *b) {
	typedef const int *ci;
	ci ap=(ci)a,bp=(ci)b;
	return *ap-*bp;
}

int main(void){
	int N,S=0,i;
	int *A,*B;
	scanf("%d",&N);
	A=(int*)calloc(N,sizeof(int));
	B=(int*)calloc(N,sizeof(int));
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<N;i++){
		scanf("%d",&B[i]);
	}
	qsort(A,N,sizeof(int),compare);
	qsort(B,N,sizeof(int),compare);
	for(i=0;i<N;i++){
		S+=A[i]*B[N-i-1];
	}
	printf("%d\n",S);
	free(A);
	free(B);
	return 0;
}