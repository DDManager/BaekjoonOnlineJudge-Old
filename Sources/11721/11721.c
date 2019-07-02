/**
 *  BOJ 11721번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 262,144 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <string.h>

int main(void){
	char input[101]={0};
	int i;
	scanf("%s",input);
	for(i=1;i<=strlen(input);i++){
		putchar(input[i-1]);
		if(i%10==0) puts("");
	}
	return 0;
}