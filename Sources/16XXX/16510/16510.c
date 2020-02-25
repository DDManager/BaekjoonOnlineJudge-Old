/**
 *  BOJ 16510번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,896 KB / 524,288 KB
 *  소요 시간 : 128 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

int *D;
int b_search(int key,int low,int high){
	while(low<=high){
		int mid=(low+high)/2;
		if(key==D[mid]) return mid;
		else if(key>D[mid]) low=mid+1;
		else high=mid-1;
	}
	return high;
}

int main(void){
	int N,M;
	int i;
	scanf("%d %d",&N,&M);
	D=(int*)calloc(N+1,sizeof(int));
	for(i=1;i<=N;i++){
		scanf("%d",&D[i]);
		D[i]+=D[i-1];
	}
	for(i=0;i<M;i++){
		int T;
		scanf("%d",&T);
		printf("%d\n",b_search(T,0,N));
	}
	return 0;
}