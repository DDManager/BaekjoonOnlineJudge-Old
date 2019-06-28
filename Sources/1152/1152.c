/**
 *  BOJ 1152번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 2,092 KB / 131,072 KB
 *  소요 시간 : 16 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

char s[1000001];
int main(void){
	int c=0;
	while(scanf("%s",s)!=EOF) c++;
	printf("%d\n",c);
	return 0;
}