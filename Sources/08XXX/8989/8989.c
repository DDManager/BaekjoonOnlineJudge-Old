/**
 *  BOJ 8989번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,112 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>
#define MABS(x) ((x)<0?(-(x)):(x))

typedef struct{
	int m,a;
}TimeData;

int comp(const void *a,const void *b){
	TimeData p=*(TimeData*)a;
	TimeData q=*(TimeData*)b;
	if(p.a==q.a) return p.m-q.m;
	return p.a-q.a;
}

int calc(int H,int M){
	int R=(H%12?H:12)*60-M*11;
	R=MABS(R<720?R:720-R);
	return R<360?R:720-R;
}

int main(void){
	int T;
	scanf("%d",&T);
	while(T--){
		TimeData A[5];
		int H,M;
		int i;
		for(i=0;i<5;i++){
			scanf("%d:%d",&H,&M);
			A[i].m=H*60+M;
			A[i].a=calc(H,M);
		}
		qsort(A,5,sizeof(TimeData),comp);
		printf("%02d:%02d\n",A[2].m/60,A[2].m%60);
	}
	return 0;
}