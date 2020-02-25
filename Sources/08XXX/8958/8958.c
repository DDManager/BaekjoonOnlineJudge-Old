/**
 *  BOJ 8958번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <string.h>

int main(void){
	int n,score=0,l,cr=0,p;
	char data[80];
	scanf("%d",&n);
	for(l=0;l<n;l++){
		scanf("%s",data);
		score=0;cr=0;
		for(p=0;p<strlen(data);p++){
			if(data[p]=='O') score+=++cr;
			else cr=0;
		}
		printf("%d\n",score);
	}
	return 0;
}