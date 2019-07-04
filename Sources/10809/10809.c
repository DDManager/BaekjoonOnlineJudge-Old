/**
 *  BOJ 10809번 C언어 소스 코드
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

#define MAX_ALPHA 26

int main(void){
	char S[101];
	int pos[MAX_ALPHA];
	int i;
	scanf("%s",S);
	for(i=0;i<MAX_ALPHA;i++) pos[i]=-1;
	for(i=0;i<strlen(S);i++) if(pos[S[i]-'a']<0) pos[S[i]-'a']=i;
	for(i=0;i<MAX_ALPHA;i++) printf(i?" %d":"%d",pos[i]);
	return 0;
}