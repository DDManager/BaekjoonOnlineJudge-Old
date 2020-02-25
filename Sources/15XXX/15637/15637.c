/**
 *  BOJ 15637번 C언어 소스 코드
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
	int lotto[]={103,88,91,99,101,86,96,100,71,91,96,91,98,102,96,85,102,97,91,112,85,79,86,91,97,98,110,80,88,80,95,83,93,109,88,91,103,90,95,113,81,86,97,93,93};
	int read;
	scanf("%d",&read);
	printf("%d\n",lotto[read-1]);
	return 0;
}