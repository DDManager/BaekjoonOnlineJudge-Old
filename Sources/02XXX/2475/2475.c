/**
 *  BOJ 2475번 C언어 소스 코드
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
	int D1,D2,D3,D4,D5;
	scanf("%d %d %d %d %d",&D1,&D2,&D3,&D4,&D5);
	printf("%d\n",(D1*D1+D2*D2+D3*D3+D4*D4+D5*D5)%10);
	return 0;
}