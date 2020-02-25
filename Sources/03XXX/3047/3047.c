/**
 *  BOJ 3047번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a,const void *b){return *(int*)a-*(int*)b;}

int main(void){
	int data[3],l;
	char abc[4];
	for (l=0;l<3;l++) scanf("%d", &data[l]);
	scanf("%s",abc);
	qsort(data,3,sizeof(int),compare);
	printf("%d %d %d\n", data[abc[0]-'A'], data[abc[1]-'A'], data[abc[2]-'A']);
	return 0;
}