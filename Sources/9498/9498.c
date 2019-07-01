/**
 *  BOJ 9498번 C언어 소스 코드
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
	int score;
	scanf("%d",&score);
	if(score>=90) puts("A");
	else if(score>=80) puts("B");
	else if(score>=70) puts("C");
	else if(score>=60) puts("D");
	else puts("F");
	return 0;
}