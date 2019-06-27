/**
 *  BOJ 1009번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int p(int,int);

int main(void){
	int T,a,b,r,i;
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d %d",&a,&b);
		r=p(a%10,b)%10;
		printf("%d\n",r==0?10:r);
	}
	return 0;
}

int p(int b,int e){
	int v=1,em=e%4,l;
	if(em==0) em=4;
	for(l=0;l<em;l++) v*=b;
	return v;
}