/**
 *  BOJ 10952번 C언어 소스 코드
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
	int A,B;
	while(scanf("%d %d",&A,&B)!=EOF){
		if(A==0&&B==0) break;
		printf("%d\n",A+B);
	}
	return 0;
}