/**
 *  BOJ 14492번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,244 KB / 524,288 KB
 *  소요 시간 : 40 ms / 2,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int N;
	char **A,**B;
	int ans=0;
	int i,j,k;
	scanf("%d",&N);
	A=(char**)calloc(N,sizeof(char*));
	for(i=0;i<N;i++){
		A[i]=(char*)calloc(N,sizeof(char));
		for(j=0;j<N;j++) scanf("%hhd",&A[i][j]);
	}
	B=(char**)calloc(N,sizeof(char*));
	for(i=0;i<N;i++){
		B[i]=(char*)calloc(N,sizeof(char));
		for(j=0;j<N;j++) scanf("%hhd",&B[i][j]);
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			char res=0;
			for(k=0;k<N;k++) res|=(A[i][k]&B[k][j]);
			if(res) ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}