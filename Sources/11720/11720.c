/**
 *  BOJ 11720번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 262,144 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n,s=0,i;
	char *data;
	scanf("%d\n",&n);
	data=(char*)calloc(n,sizeof(char));
	fgets(data,n+1,stdin);
	for(i=0;i<n;i++) s+=data[i]-'0';
	printf("%d\n",s);
	return 0;
}