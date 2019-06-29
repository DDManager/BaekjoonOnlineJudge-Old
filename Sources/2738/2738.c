/**
 *  BOJ 2738번 C언어 소스 코드
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

int main(void){
	short *A,*B;
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	A=(short*)calloc(n*m,sizeof(short));
	B=(short*)calloc(n*m,sizeof(short));
	for(i=0;i<n;i++) for(j=0;j<m;j++) scanf("%hd",&A[i*m+j]);
	for(i=0;i<n;i++) for(j=0;j<m;j++) scanf("%hd",&B[i*m+j]);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++) printf(j?" %d":"%d",A[i*m+j]+B[i*m+j]);
		puts("");
	}
	free(A);
	free(B);
	return 0;
}