/**
 *  BOJ 11399번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 262,144 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

int comp(const void *a,const void *b){return *(int*)a-*(int*)b;}
int main(void){
	int N,S=0,A=0,i;
	int *D;
	scanf("%d",&N);
	D=(int*)calloc(N,sizeof(int));
	for(i=0;i<N;i++) scanf("%d",&D[i]);
	qsort(D,N,sizeof(int),comp);
	for(i=0;i<N;i++){
		S+=D[i];
		A+=S;
	}
	printf("%d\n",A);
	free(D);
	return 0;
}