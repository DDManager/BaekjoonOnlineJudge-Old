/**
 *  BOJ 2750번 C언어 소스 코드
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

int compare(const void *a,const void *b){return *(short*)a-*(short*)b;}

int main(void){
	short n,l,*d;
	scanf("%hd",&n);
	d=(short*)calloc(n,sizeof(short));
	for(l=0;l<n;l++) scanf("%hd",&d[l]);
	qsort(d,n,sizeof(short),compare);
	for(l=0;l<n;l++) printf("%hd\n",d[l]);
	free(d);
	return 0;
}