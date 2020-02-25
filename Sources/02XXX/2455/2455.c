/**
 *  BOJ 2455번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int O,I,S=0,M=0;
	int i;
	for(i=0;i<4;i++){
		scanf("%d %d",&O,&I);
		S+=I-O;
		if(S>M) M=S;
	}
	printf("%d\n",M);
	return 0;
}