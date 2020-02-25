/**
 *  BOJ 4949번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,112 KB / 131,072 KB
 *  소요 시간 : 4 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>
#include <string.h>

typedef struct STK{
	char stk[128];
	int top;
}STK;

int is_valid(char *str){
	STK s;
	int len=strlen(str);
	int i;
	s.top=-1;
	for(i=0;i<len;i++){
		if(str[i]=='('||str[i]=='[') s.stk[++s.top]=str[i];
		else if(str[i]==')'){
			if(s.top>=0&&s.stk[s.top]=='(') s.top--;
			else return 0;
		}else if(str[i]==']'){
			if(s.top>=0&&s.stk[s.top]=='[') s.top--;
			else return 0;
		}
	}
	return s.top==-1;
}

int main(void){
	char str[128];
	while(fgets(str,127,stdin)&&str[0]!='.') puts(is_valid(str)?"yes":"no");
	return 0;
}