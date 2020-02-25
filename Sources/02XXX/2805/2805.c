/**
 *  BOJ 2805번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 5,020 KB / 262,144 KB
 *  소요 시간 : 224 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX(x,y) ((x)>(y)?(x):(y))

long long calc(int *arr,int K,long long h){
	long long sum=0;
	int i;
	for(i=0;i<K;i++) sum+=MAX(arr[i]-h,0);
	return sum;
}

int main(void){
	int N,M;
	int *A;
	int MX=0;
	long long left,right,mid;
	long long answer=0;
	int i;
	scanf("%d %d",&N,&M);
	A=(int*)calloc(N,sizeof(int));
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
		if(A[i]>MX) MX=A[i];
	}
	left=1;right=MX;
	while(left<=right){
		mid=(left+right)/2;
		if(calc(A,N,mid)<M) right=mid-1;
		else{
			left=mid+1;
			answer=mid;
		}
	}
	printf("%lld\n",answer);
	return 0;
}