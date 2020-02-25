/**
 *  BOJ 4344번 C언어 소스 코드
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

void calc(int);

int main(void){
	int c,i,n;
	scanf("%d",&c);
	for(i=0;i<c;i++){
		scanf("%d",&n);
		calc(n);
	}
	return 0;
}

void calc(int n){
	int *d=(int*)calloc(n,sizeof(int));
	int i,s=0,c=0;
	for(i=0;i<n;i++) {
		scanf("%d",&d[i]);
		s+=d[i];
	}
	for(i=0;i<n;i++){
		if(d[i]*n>s) c++;
	}
	printf("%.3f%%\n",(double)c/(double)n*100.0);
}