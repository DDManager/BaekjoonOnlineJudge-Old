/**
 *  BOJ 1076번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <string.h>

char *cname[10]={"black","brown","red","orange","yellow","green","blue","violet","grey","white"};

int get_value(char*);

int main(void){
	long long answer;
	int i;
	char input[10]={0};
	scanf("%s",input);
	answer=get_value(input)*10;
	scanf("%s",input);
	answer+=get_value(input);
	scanf("%s",input);
	for(i=0;i<get_value(input);i++) answer*=10;
	printf("%lld\n",answer);
	return 0;
}

int get_value(char *in){
	int i;
	for(i=0;i<10;i++){
		if(strcmp(cname[i],in)==0) return i;
	}
	return -1;
}