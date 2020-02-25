/**
 *  BOJ 1654번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,112 KB / 131,072 KB
 *  소요 시간 : 4 ms / 2,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

long long calc(int *arr,int K,long long len){
	long long sum=0;
	int i;
	for(i=0;i<K;i++) sum+=arr[i]/len;
	return sum;
}

int main(void){
	int K,N;
	int *A;
	int M=0;
	long long left,right,mid;
	long long answer=0;
	int i;
	scanf("%d %d",&K,&N);
	A=(int*)calloc(K,sizeof(int));
	for(i=0;i<K;i++){
		scanf("%d",&A[i]);
		if(A[i]>M) M=A[i];
	}
	left=1;right=M;
	while(left<=right){
		mid=(left+right)/2;
		if(calc(A,K,mid)<N) right=mid-1;
		else{
			left=mid+1;
			answer=mid;
		}
	}
	printf("%lld\n",answer);
	return 0;
}