/**
 *  BOJ 14696번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 524,288 KB
 *  소요 시간 : 16 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int N,c,n,i,j;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		int A[4]={0},B[4]={0};
		scanf("%d",&c);
		for(j=0;j<c;j++) scanf("%d",&n),A[4-n]++;
		scanf("%d",&c);
		for(j=0;j<c;j++) scanf("%d",&n),B[4-n]++;
		if(A[0]==B[0]){
			if(A[1]==B[1]){
				if(A[2]==B[2]){
					if(A[3]==B[3]) puts("D");
					else puts(A[3]>B[3]?"A":"B");
				}else puts(A[2]>B[2]?"A":"B");
			}else puts(A[1]>B[1]?"A":"B");
		}else puts(A[0]>B[0]?"A":"B");
	}
	return 0;
}