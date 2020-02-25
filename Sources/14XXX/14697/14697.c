/**
 *  BOJ 14697번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 524,288 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int A,B,C,N;
	int i,j,p;
	scanf("%d %d %d %d",&A,&B,&C,&N);
	for(i=0;i<=N/A;i++){
		for(j=0;j<=N/B;j++){
			for(p=0;p<=N/C;p++){
				int M=i*A+j*B+p*C;
				if(M==N){
					puts("1");
					return 0;
				}else if(M>N) break;
			}
		}
	}
	puts("0");
	return 0;
}