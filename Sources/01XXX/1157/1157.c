/**
 *  BOJ 1157번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 2,092 KB / 131,072 KB
 *  소요 시간 : 16 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	int cnt;
	char ch;
}Count;
char str[1000001];
int comp(const void *a,const void *b){return ((Count*)b)->cnt-((Count*)a)->cnt;}
int main(void){
	int i;
	Count arr[26];
	for(i=0;i<26;i++){
		arr[i].cnt=0;
		arr[i].ch='A'+i;
	}
	scanf("%s",str);
	for(i=0;str[i];i++){
		if('a'<=str[i]&&str[i]<='z') arr[str[i]-'a'].cnt++;
		if('A'<=str[i]&&str[i]<='Z') arr[str[i]-'A'].cnt++;
	}
	qsort(arr,26,sizeof(Count),comp);
	if(arr[0].cnt==arr[1].cnt) putchar('?');
	else putchar(arr[0].ch);
	return 0;
}