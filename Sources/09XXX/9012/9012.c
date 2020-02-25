/**
 *  BOJ 9012번 C언어 소스 코드
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

int check(char *in){
	char ch;
	int i,n=strlen(in),top=-1;
	for(i=0;i<n;i++){
		ch=in[i];
		switch(ch){
		case '(': top++; break;
		case ')':
			if(top==-1) return 0;
			top--; break;
		}
	}
	return top==-1;
}

int main(void){
	char str[64];
	int T,i;
	scanf("%d",&T);
	for(i=0;i<T;i++) scanf("%s",str),puts(check(str)?"YES":"NO");
	return 0;
}