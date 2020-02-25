/**
 *  BOJ 1159번 C언어 소스 코드
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
	int n,l,c=0;
	short data[26]={0};
	char name[31];
	scanf("%d",&n);
	for(l=0;l<n;l++){
		scanf("%s",name);
		data[name[0]-'a']++;
	}
	for(l=0;l<26;l++){
		if(5<=data[l]){
			putchar('a'+l);
			c++;
		}
	}
	if(!c) puts("PREDAJA");
	return 0;
}