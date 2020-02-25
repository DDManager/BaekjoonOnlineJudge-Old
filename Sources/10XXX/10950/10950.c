/**
 *  BOJ 10950번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 262,144 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int T,A,B,i;
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d %d",&A,&B);
		printf("%d\n",A+B);
	}
	return 0;
}