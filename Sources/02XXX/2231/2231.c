/**
 *  BOJ 2231번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,112 KB / 196,608 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>

int dsum(int N){return N?dsum(N/10)+N%10:0;}
int main(void){
	int N;
	int i;
	scanf("%d",&N);
	for(i=N-99;i<N;i++){
		if(i+dsum(i)==N){
			printf("%d\n",i);
			return 0;
		}
	}
	puts("0");
	return 0;
}