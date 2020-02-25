/**
 *  BOJ 1546번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n,*dat,l,max=0,sum=0;
	double div,avg;
	scanf("%d",&n);
	dat=(int*)calloc(n,sizeof(int));
	for(l=0;l<n;l++) {
		scanf("%d",&dat[l]);
		sum+=dat[l];
		if(max<dat[l]) max=dat[l];
	}
	div=100.0/(double)max;
	avg=(double)sum/(double)n;
	printf("%.2f\n",div*avg);
	return 0;
}